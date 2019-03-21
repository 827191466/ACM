#include <cstdio>
#include <cstring>
int n, m, ans;
int g[7][7];
int MAX(int a, int b)
{
	if(a > b)
		return a;
	return b;
}
void dfs(int x, int y, int cnt)
{
	if(x >= n)
	{
		ans = MAX(ans,cnt);
		return;
	}
	if(y >= m)
	{
		dfs(x+1,0,cnt);
		return;
	}
	if(g[x][y] == 1)
	{
		dfs(x,y+1,cnt);
		return;
	}
	dfs(x,y+1,cnt);
	int t, flag = 0;
	for(t = x-1; t >= 0; t--)
	{						 
		if(g[t][y])
		{
			break;
		}
	}
	for(int i = t-1; i >= 0; i--)
	{
		if(g[i][y])
		{
			if(g[i][y] == 2)
			{
				flag = 1;
			}
			break;
		}
	}
	if(flag)
	{
		return;
	}
	for(t = y-1; t >= 0; t--)
	{						 
		if(g[x][t])
			break;
	}
	for(int j = t-1; j >= 0 ; j--)
	{
		if(g[x][j])
		{
			if(g[x][j] == 2)
			{
				flag = 1;
			}
			break;
		}
	}
	if(flag)
	{
		return;
	}
	g[x][y] = 2;
	dfs(x,y+1,cnt+1);
	g[x][y] = 0;
}
int main()
{
	int Q, u, v, i;
	while(~scanf("%d%d%d",&n,&m,&Q))
	{
		memset(g,0,sizeof(g));
		for(i = 0; i < Q; i++)
		{
			scanf("%d%d",&u,&v);
			g[u][v] = 1; 
		}
		ans = 0;
		dfs(0, 0, 0);
		printf("%d\n",ans);
	}
	return 0;
}


