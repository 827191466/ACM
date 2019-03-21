#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int ans=0;
int answ[11];
bool canPut(int row,int col,int *x)
{
	int i;
	for(i=1;i<col;i++){
		if(x[i]==row||abs(row-x[i])==abs(col-i))
		return false;
	}
	return true;
}
void dfs(int dep,int n,int *x) 
{
	int i;
	if(dep>n){
		ans++;
		return ;
	}
	for(i=1;i<=n;i++){
		if(canPut(i,dep,x)){
			x[dep]=i; 
			dfs(dep+1,n,x);
		}	
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int n,i;
	for(i=1;i<11;i++){
		ans=0;
		int *x=new int[i+1];
		dfs(1,i,x);
		answ[i]=ans;
		delete[]x;		
	}
	while(scanf("%d",&n)){
		if(n==0) break;
    	printf("%d\n",answ[n]);
	}   
	return 0;
}



