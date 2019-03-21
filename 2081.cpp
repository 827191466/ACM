#include<iostream>
using namespace std;
int main()
{
	int n;
	long long int m;
	cin>>n;
	while(n--)
	{
		cin>>m;
		cout<<600000+m%100000<<endl;
	}
	return 0;
} 
