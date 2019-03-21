#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n;
	while(cin>>t&&t!=0)
	{
		for(int i=0;i<t;i++)
		{
			cin>>n;
			cout<<"Case"<<i+1<<": "<<pow(2,n-1)*(pow(2,n-1)+1)<<endl;
		}
		cout<<endl;
	}
} 
