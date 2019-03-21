#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
#define N 5
char a[]={'a','b','c','d'};
char x[N];
int n=4;
int vis[N]; 
void swap(int x,int y)//用于交换数组的两个数
{
    int temp=a[x];
    a[x]=a[y];
    a[y]=temp;
}
void dfs(int dep){
	int i,j;
	if(dep==n){
		for(j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
		return;
	}
	for(i=dep;i<4;i++){
		swap(dep,i);
		dfs(dep+1);
		swap(dep,i);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	dfs(0);
	return 0;
}


