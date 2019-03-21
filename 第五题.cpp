#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MOD 10000007
int c=0;
long long power(int a,int n){
	if(n==0)
		return 1;
	long long tmp=power(a,n>>1) % MOD;
	if(n%2!=0)
		return a*tmp*tmp;
	else
		return tmp*tmp;
} 
void find(int l,int r,int *s,int f){
	int mid=(l+r)/2;
	if(l==r){
		if(s[mid]==f)
			c++;
	}
	if(l<r){
		if(s[mid]<f){
			find(mid+1,r,s,f);
		}
		if(s[mid]>f){
			find(l,mid,s,f);
		}
		if(s[mid]==f){
			find(mid+1,r,s,f);
			find(l,mid-1,s,f);
			c++;
		}	
	}
}
int main()
{
	int t,n,i,j,tmp,l,r;
	scanf("%d",&t);
	while(t--){
		c=0;
		scanf("%d",&n);
		int *s=new int[n];
		for(i=0;i<n;i++){
			scanf("%d",&s[i]);
		}
		sort(s,s+n);
		for(i=0;i<31;i++){
			for(j=0;j<n;j++){
				l=j+1;
				r=n-1;
				tmp=power(2,i)-s[j];
					find(l,r,s,tmp);				
			}
		}
		printf("%d\n",c);
		delete []s;
	}	
	return 0;
}

