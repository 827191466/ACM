#include<iostream>
#include<algorithm>
using namespace std;
int cmp(int m,int n)
{
    return m  >  n;
}  
int a[3000];
int b[3000];
int main()
{
	int n,i,count,sum,j,c,d;
	while(cin>>n&&n)
	{	
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a,a+n,cmp);
		sort(b,b+n,cmp);
		count=0;
		sum=0;
		i=0;
		j=0;
		c=n-1;
		d=n-1;
		while(1){
			if(count==n)
				break;
			if(a[i]>b[j]){
				i++;
				j++;
				sum+=200;
				count++;
				continue;
			}
			if(a[i]<b[j]){
				c--;
				j++;
				sum-=200;
				count++;
				continue;
			}
			if(a[i]==b[j]){
				if(a[c]>b[d]){
					c--;
					d--;
					sum+=200;
					count++;
				}
				else{
					if(a[c]<b[j]){
						c--;
						j++;
						count++;
						sum-=200;
					}
					else
					{
						c--;
						j++;
						count++;
					}
				}
				continue;
			}
		}
		cout<<sum<<endl;
	} 
	return 0;
}


#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[3000],b[3000];
int cmp(int a,int b)
{
  return a>b;    
}
int main()
{
   int i,n,j,sum,k,f,ji;
   while( scanf("%d",&n) && n!=0 )
   {
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);  
      for(i=0;i<n;i++)      
        scanf("%d",&b[i]);
      sort(a,a+n,cmp);   
      sort(b,b+n,cmp);
      ji=0;    //   ��¼ king  �����õ���  ѭ���������ж����� 
      i=j=sum=0;
      k=n-1;
      f=n-1;
      while(1)
      {           
          if(ji==n)   break;   //   king  ����ȫ����������� 
          if(b[j]>a[i]) {   sum-=200;j++;k--;ji++; continue;}  //���king�ı�tian�Ŀ���� ��tian�������king�Ŀ��� 
          if(b[j]==a[i]){                                       //������ 
                            if(b[f]<a[k]){f--;k--;sum+=200;ji++;continue;} //�����˵����� tian�������king���������� 
                            if(b[j]>a[k]){sum-=200;k--;j++;ji++;}
                            else {k--;j++;ji++;}
                            continue;
                        }
          if(b[j]<a[i]){sum+=200;j++;i++;ji++;continue;}  //���tian�ı�king�Ŀ���� ֱ�ӱ� 
      }          
      printf("%d\n",sum);    
   }
}
/*1�������������������������죬���֮

2�����������������������������������������������������  

3����������������ٶ����������������ٶ����

3.1�������������ı������������Ŀ죬���֮       

3.2�������������ı����������������������VS������

3.3���������������������������ȣ������VS������*/
