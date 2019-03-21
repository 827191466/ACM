#include<iostream>
#include<algorithm> 
using namespace std;
int n,le,re,diff,k,ans,mi,mx,s;
int a[20];
void dfs(int dep,int st){
	if(dep==k+1)
	{
		if(mx-mi>=diff&&s>=le&&s<=re){
			ans++;
		}						
		return;
	}
	for(int i=st;i<n;i++){
		if(dep==1)
			mi=a[i];
		if(dep==k)
			mx=a[i];
		s+=a[i];
		dfs(dep+1,i+1);	
		s-=a[i];		
	}
}
int main()
{
	int t,i,s;
	cin>>t;
	while(t--){
		ans=0;		
		cin>>n>>le>>re>>diff;
		for(i=0;i<n;i++){
			cin>>a[i];
		}			
		sort(a,a+n);
		for(k=1;k<=n;k++){
			s=0;
			dfs(1,0);
		}		
		cout<<ans<<endl;
	} 
	return 0;
}
