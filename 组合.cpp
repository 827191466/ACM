#include<iostream>
using namespace std;
#define N 100000
int x[N];
int a[N];
int dis[N][N];
int vis[N];
int n;
void dfs(int st,int dep){
	int i;
	if(dep==n){
		for(i=0;i<k;i++)
			cout<<x[i]<<' ';
		cout<<endl;
		cnt++;
		return;
	}
	for(i=st;i<N;i++){
		x[dep]=a[i];
		dfs(i+1,dep+1);
	}
}
int main()
{
	int x,y,l;
	while(cin>>n){
		cin>>x>>y>>l;
		dis[x][y]=l;
		dis[y][x]=l;
		vis[x]++;
		vis[y]++;		
	}
	
	}
	return 0;
}

