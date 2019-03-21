#include<stdio.h>
bool check1(int num1,int num2,int t)
{
    int a[4],b[4];
    int c[4];
    int i,j;
    for(i=0;i<4;i++)
    {
        a[i]=num1%10;
        num1/=10;
        b[i]=num2%10;
        num2/=10;
        c[i]=0;
    }   
    int m=0;
    for(i=0;i<4;i++)
       for(j=0;j<4;j++)
          if(c[j]==0&&a[i]==b[j])
          {
              m++;
              c[j]=1;
              break;
          }    
    if(m==t)  return true;
    else return false;
}  
bool check2(int num1,int num2,int t)
{
    int a[4],b[4];
    int i,j;
    int m=0;
    for(i=0;i<4;i++)
    {
        a[i]=num1%10;
        num1/=10;
        b[i]=num2%10;
        num2/=10;
        if(a[i]==b[i]) m++;
    }   
    if(m==t)  return true;
    else  return false; 
}  
int main()
{
    int a[101],b[101],c[101];
    int cnt,res;
    int n,i,j;
    while(scanf("%d",&n),n)
    {
        for(i=0;i<n;i++)
           scanf("%d%d%d",&a[i],&b[i],&c[i]);
        cnt=0;
        for(i=1000;i<=9999;i++)
        {
            for(j=0;j<n;j++)
            {
                  if(check1(i,a[j],b[j])==false)break;
                  if(check2(i,a[j],c[j])==false)break;
            }  
            if(j>=n)
            {
                cnt++;
                res=i;
            } 
            if(cnt>=2)break;     
        }
        if(cnt==0||cnt>=2) printf("Not sure\n");
        else printf("%d\n",res);    
    }   
    return 0; 
}   
