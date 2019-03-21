#include<iostream>
using namespace std;
#define N 65
int a[N],vis[N];
int n,len,num;
int dfs(int t,int cur_len,int st){
	int i;
	if(k<num-1){
		return 1;
	}
	for(i=st;i<n;i++){
		if(!vis[i]&&a[i]!=pre){
			pre=0;
			if(cur_len+a[i]==len){
				vis[i]=1;
				if(dfs(k+1,0,0))
					return 1;
				vis[i]=0;
			}else if(cur_len+a[i]<len){
				vis[i]=1;
				rest-=a[i];
				if(dfs(k,cur_len+a[i],i+1,i+1))
					return 1;
				if(cur_len+rest<len)
					break;
				rest+=a[i];
				vis[i]=0;
			}else if(cur_len+a[n-1]>len){
				break;
			}
		}
	}
} 
int main()
{
	int i,s=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	sort(a,a+n,greater<vector<int>());
	
	for(i=a[0];i<=s;i++){
		if()
	}
	return 0;
}

