#include<iostream>
using namespace std;
#include<cstdio>
using namespace std;
#define MOD 10000007
long long power(int a,int n){
	if(n==0)
		return 1;
	long long tmp=power(a,n>>1) % MOD;
	if(n%2!=0)
		return a*tmp*tmp;
	else
		return tmp*tmp;
} 
int main()
{
	int t,n,a,i,j,tmp;
	long long s1,s2,s3;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&a);
		for(i=0;i<1000000000;i++)
		
	}
	return 0;
}

