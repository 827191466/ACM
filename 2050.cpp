#include<iostream>
using namespace std;
int main()
{
	int t,n,i,sum;
	cin>>t;
	while(t--)
	{
		sum=1;
		cin>>n;
		for(i=1;i<2*n;i++)
			sum+=i;
		cout<<sum<<endl;
	}
	return 0;
}
