#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[10];
		int count=0;
		while(n!=0)
		{
			a[count]=n%2;
			n=n/2;
			count++;
		}
		for(int i=count-1;i>=0;i--)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
} 
