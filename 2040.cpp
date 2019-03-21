#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		int s1=0;
		int s2=0;
		for(int i=1;i<a;i++)
		{
			if(a%i==0)
				s1=s1+i;
		}
		for(int j=1;j<b;j++)
		{
			if(b%j==0)
				s2=s2+j;
		}
		if(s1==b&&s2==a)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
