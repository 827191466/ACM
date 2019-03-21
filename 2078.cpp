#include<iostream>
using namespace std;
int main()
{
	int t,n,m,s;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int max=0;
		int min=100;
		while(n--)
		{
			cin>>s;
			if(s>max)
				max=s;
			if(s<min)
			 	min=s;
		}
		int a=(max-min)*(max-min);
		int b=(100-min)*(100-min);
		if(b>a)
			cout<<b<<endl;
		else
			cout<<a<<endl;
	}
	return 0;
}
