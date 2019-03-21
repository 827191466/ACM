#include<string>
#include<algorithm>
#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<map>
#include<cmath>
#include<math.h>
using namespace std;
#define ll long long
ll pow1(ll a,ll n)
{
	ll ans=1;
	while(n>0)
	{
		if(n&1)
			ans=(ans*a);
		n=n/2;
		a=a*a;
	}
	return ans;
}
int main()
{
	int t;
	ll sum,i,n,x,temp;
	cin>>t;
	while(t--)
	{
		sum=x=temp=0;
		cin>>n;
		if(n%2==0)				//利用求和公式算 
			sum=(n/2)*(1+n);
		else
			sum=(n+1)/2*n;
		while(n)
		{
			n=n/2;
			x++;  				// x表示它有多少个2的幂 
		}
		for(i=0;i<x;i++)
			temp+=pow1(2,i);
		sum=sum-2*temp;
		cout<<sum<<endl;
	}
	return 0;
}
