/*#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
#define N 1003
char x[N],y[N];
int dp[N][N];

int main()
{
	int i,j,lenx,leny;
	x[0]=y[0]='0';
	cin>>x+1>>y+1;//从x[1],y[1]输入;
	lenx=strlen(x)-1;
	leny=strlen(y)-1;
	for(i=0;i<lenx;i++)
		dp[i][0]=0;
	for(i=0;i<leny;i++)
		dp[0][i]=0;
	for(i=1;i<lenx;i++){
		for(j=1;j<leny;j++){
			if(x[i]==y[j])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout<<dp[lenx-1][leny-1]<<endl;
	return 0;
}

*/
//空间优化，滚动数组

#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
#define N 1003
char x[N],y[N];
int pre[N],cur[N];
int main()
{
	int i,j,lenx,leny;
	x[0]=y[0]='0';
	cin>>x+1>>y+1;//从x[1],y[1]输入;
	lenx=strlen(x)-1;
	leny=strlen(y)-1;
	for(i=0;i<lenx;i++)
		pre[i]=0;
	cur[0]=0;
	for(i=1;i<lenx;i++){		
		for(j=1;j<leny;j++){
			if(x[i]==y[j])
				cur[j]=pre[j-1]+1;
			else
				cur[j]=max(cur[j-1],pre[j]);
		}
		for(j=0;j<leny;j++)
			pre[j]=cur[j];
	}	
	cout<<cur[leny-1]<<endl;
	return 0;
}

 
