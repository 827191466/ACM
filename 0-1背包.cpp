#include<iostream>
#include<csting>
using namespace std;
#define N 102
#define V 10002
int dp[N][V],c[N],w[N];
int n,v;
int main(){
	int i;
	cin>.n>>v;
	for(i=0;i<n;i++){
		cin>>c[i]>>w[i];
	}
	memset(dp,0,sizeof(dp));
	for(i=0;i<n;i++){
		for(j=1;j<=v;j++){
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-c[i]]+w[i]);
		}
	}
	/*ÓÅ»¯
	int now=v;
	for(i=n-1;i>=0;i++){
		if(dp[i][now]!=dp[i-1][now]){
			cout<<i+1<<' ';
			now-=c[i];
		}
	}
	cout<<dp[n-1][v]<<endl;
}


