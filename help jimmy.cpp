#include<iostream>
using namespace std;
int down(int x,int st,int h){
	for(j=st;j>=0;j--){
		if(h-layer[j].h>MAX)
			return -1;		
	}
	return 0;
}
int main()
{
	int i,j,sx,sy,lx,rx,dl,dr;
	cin>>n>>sx>>sy>>MAX;
	layer[0].lx=layer[0].rx=sx;
	layer[0].h=sy;
	layer[1].lx=-INF;
	layer[1].rx=INF;
	layer[1].h=0;
	for(i=0;i<=n;i++){
		cin>>layer[i].lx>>layer[i].rx>>layer[i].hl
	}
	sort(layer,layer+n+1);
	for(i=0;i<=n+1;i++){
		lx=layer[i].lx,rx=layer[i].rxl
		dl=down(lx,i-1,layer[i].h);
		dr=down(rx,i-1,layer[i].h);
		if(dl>0)
			dp[i][0]=min(dp[dl][0]+rx-layer[dl].lx,dp[dl][1]-lx+layer[dl].rx);
		if(dr>0)
			dp[i][1]=min(dp[dr][0]+rx-layer[dr].lx,dp[dr][1]-lx+layer[dr].rx);
		else
			dp[i][1]=INF;
	}
	return 0;
}

