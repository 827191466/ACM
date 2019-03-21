#include<iostream>
#include<cmath> 
using namespace std;
#define N 8
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int ex,ey,n,m,t,vis[100][100];
char map[100][100];
bool canMove(int x,int y,int cur){
	int tmp=t-cur-abs(x-ex)-abs(y-ey);
	if(x<0||x>=n||y<0||y>=m||vis[x][y])
		return false;		
	else if(map[x][y]=='X')
		return false;	
	else if(x==ex&&y==ey&&t!=cur)
		return false;
	else if(tmp<0||tmp&1)
		return false;		
	return true;
}
int dfs(int x,int y,int dep){
	int i,dx,dy;
	if(x==ex&&y==ey){
		return 1;
	}	
	for(i=0;i<4;i++){
	
		dx=x+dir[i][0];
		dy=y+dir[i][1];
		if(!canMove(dx,dy,dep))
			continue;
		vis[dx][dy]=1;
		if(dfs(dx,dy,dep+1))
			return 1;
		vis[dx][dy]=0;
		
	}
	return 0;
}
int main()
{
	int i,j,sx,sy,k;
	char ch;
	while(cin>>n>>m>>t,m+n+t){
		k=0;
		if(n==0&&m==0&&t==0)
			break;
		for(i=0;i<100;i++){
			for(j=0;j<100;j++)
			{
				vis[i][j]=0;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>ch;
				if(ch=='S')
					sx=i,sy=j;
				else if(ch=='D')
					ex=i,ey=j;
				else if(ch=='X')
					k++;
				map[i][j]=ch;
			}
		}		
		if(n*m-k<t){
			cout<<"NO"<<endl;
			continue; 
		}
		vis[sx][sy]=1;
		if(dfs(sx,sy,1)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}		 
	}	
	return 0;
}

