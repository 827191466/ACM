#include<iostream>
using namespace std;
#define N 6
int a[N]={1,2,3,4,5,6};
int x[4];
int k=4;
int cnt=0;
void dfs(int st,int dep){
	int i;
	if(dep>=k){
		for(i=0;i<k;i++)
			cout<<x[i]<<' ';
		cout<<endl;
		cnt++;
		return;
	}
	for(i=st;i<N;i++){
		x[dep]=a[i];
		dfs(i,dep+1);
	}
}
int main()
{
	dfs(0,0);
	return 0;
}
