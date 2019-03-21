#include<iostream>
using namespace std;
int n,i,j,ans;
char s[5][5];
int c_put(int n,int m)
{
    for(i=n-1;i>=0;i--)//行数 向前寻找
    {
        if(s[i][m]=='O')//如果有碉堡则产生冲突
            return 0;
        if(s[i][m]=='X')//如果在遇到碉堡之前遇到了墙壁 则可以放 直接跳出循环
            break;
    }
    for(j=m-1;j>=0;j--)//列数 向前寻找
    {
        if(s[n][j]=='O')//如果有碉堡则产生冲突
            return 0;
        if(s[n][j]=='X')//如果在遇到碉堡之前遇到了墙壁 则可以放 直接跳出循环
            break;
    }
    return 1;
}
 
void dfs(int k,int num)
{
    int x,y;
    if(k==n*n)//如果搜索到最后一格
    {
        if(num>ans)//那么比较放置个数
            ans=num;
        return ;//返回
    }
    else
    {
        x=k/n;//行数
        y=k%n;//列数
        //如果单元格可以放置
        if(s[x][y]=='.'&&c_put(x,y))//判断是否为碉堡 是否产生冲突
        {
            s[x][y]='O';//防止碉堡,并且标记
            dfs(k+1,num+1);
            s[x][y]='.';
        }
        //如果单元格不可以放置
        dfs(k+1,num);//否则就向下继续寻找;
    }
}
int main()
{
    while(cin>>n&&n)
    {
        ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin>>s[i][j];
        }
        dfs(0,0);
        cout<<ans<<endl;
    }
}

