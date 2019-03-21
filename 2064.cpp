#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		long long int a[36]; 
		a[1]=2;
		for(int i=2;i<=n;i++)
		{
			a[i]=a[i-1]*3+2;
		}
		cout<<a[n]<<endl;		
	}
	return 0;
} 
