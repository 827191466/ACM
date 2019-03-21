#include<iostream>
#define INF 0x7ffffff
#define MAXN 10000
int dp[MAXN];//dp[i]代表第i个导弹当前拦截的高度
using namespace std;
int main()
{
    int n,x,i,res,flag;
    int minh;
    while(cin>>n)
    {
        res=0;
        while(n--)
        {
            cin>>x;
            flag=0;
            minh=INF;
            int tempi;            
            for(i=0;i<res;i++)
            {
                if(x<=dp[i]&&minh>dp[i]-x)
                {
                    minh=dp[i]-x;
                    tempi=i;
                    flag=1;
                }    
            }
            if(flag==0)
            {
                dp[res]=x;
                res++;
            }        
            else dp[tempi]=x;
        }
        cout<<res<<endl;    
    }    
    return 0;
}   

