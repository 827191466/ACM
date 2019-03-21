#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	long long int a,b,c;
	while(cin>>n)
	{
		a=3,b=2,c=1;
		for(i=1;i<n;i++)
		{
			a=b*3+c*2;
			c=b;
			b=a-c;
		}
		cout<<a<<endl;
	}
	return 0;
}
