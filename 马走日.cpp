#include<iostream>
using namespace std;
#define N 15
int n,flag=0;
int dir[8][2]={{-2,-1},{-2,1},{2,1},{2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
int vis[N][N]={0};
struct point{
	int x,y;
	int num;
	
};
bool canPut(int dx,int dy){
	if(dx<0||dx>=n||dy<0||dy>=n)
		return false;
	else{
		if(vis[dx][dy])
			return false;
	}
	return true;
}
void dfs(int x,int y,int dep){
	int i,dx,dy;
	if(dep>n*n){
		cout<<"YES"<<endl;
		return;
	}
	for(i=0;i<8;i++){
		dx=x+dir[i][0];
		dy=y+dir[i][1];
		if(canPut(dx,dy)){
			vis[dx][dy]=1;
			dfs(dx,dy,dep+1);
			vis[dx][dy]=0;
		}
	}
}
int main()
{
	int x,y;
	cin>>n>>x>>y;
	vis[x][y]=1;
	dfs(x,y,1);
	return 0;
}

