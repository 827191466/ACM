#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	long long l,n,m,i,s,x;
	scanf("%d%d%d",l,n,m);
	int *a=new int[l];
	int *b=new int[n];
	int *c=new int[m];
	for(i=0;i<l;i++)
		scanf("%I64d",a[i]);
	for(i=0;i<n;i++)
		scanf("%I64d",b[i]);
	for(i=0;i<m;i++)
		scanf("%I64d",c[i]);
	cin>>s;
	
	return 0;
}

