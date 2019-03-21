#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct necklace{
	int w;
	int v;
};
necklace ne[20];
int n,k,W,ans,tmp,mx;
bool cmp(necklace a,necklace b){
	if(a.v!=b.v)
		return a.v>b.v;
	else
		return a.w<b.w;
}
void dfs(int st,int dep){
	int i;
	if(dep==k){
		if(ans>mx)
			mx=ans;		
		return;
	}
	for(i=st;i<n;i++){
		if(tmp+ne[i].w<=W){
			tmp+=ne[i].w;
			ans+=ne[i].v;
			dfs(i+1,dep+1);
			tmp-=ne[i].w;
			ans-=ne[i].v;
		}
	}
}
int main()
{
	int t,i;
	cin>>t;
	while(t--){
		tmp=0;
		ans=0;
		mx=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
			scanf("%d%d",&ne[i].v,&ne[i].w);
		}	
		sort(ne,ne+n,cmp);
		scanf("%d",&W);
		dfs(0,0);
		printf("%d\n",mx); 
	}
	return 0;
}

