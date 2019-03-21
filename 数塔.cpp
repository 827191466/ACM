#include<iostream>
using namespace std;
#define N 102
int a[N][N]={0},dp[N][N]={0}; 
int main()
{
	int i,j,t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				cin>>a[i][j];
			}
		}
		a[0][0]=0;
		a[0][1]=0;
		dp[1][1]=a[1][1];
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				dp[i][j]=a[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
			}
		}
		int ret=0;
		for(i=1;i<=n;i++){
			if(dp[n][i]>ret)
				ret=dp[n][i];
		}
		cout<<ret<<endl;
	}	
	return 0;
}

