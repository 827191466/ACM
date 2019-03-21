#include<stdio.h>
#include<string.h>
#define N 10000   
int str[N][260];
int main()
{
    memset(str,0,sizeof(str));
    str[1][0]=1;
    str[2][0]=1;
    str[3][0]=1;
    str[4][0]=1;
    int i,j,ans=0,c,n;
    for(i=5;i<N;i++)
    {
        for(j=0,c=0;j<260;j++)
        {
            ans=str[i-1][j]+str[i-2][j]+str[i-3][j]+str[i-4][j]+c;
            c=ans/100000000;
            str[i][j]=ans%100000000;   //每一个数组存8位数字，c来控制是否进位。 
        }
    }
    while(scanf("%d",&n)!=EOF)
    {
        j=259;
        while(!str[n][j])    //将首0清除。 
        j--;
        printf("%d",str[n][j]);
        for(i=j-1;i>=0;i--)
        printf("%08d",str[n][i]);//每8位输出，不足8位自动补0； 
        printf("\n");
    }
    return 0;
}

