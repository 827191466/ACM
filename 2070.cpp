#include<iostream>
using namespace std;
int main()
{
	long long int a[51]={0,1};
	int n;
	for(int i=2;i<51;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	while(cin>>n&&n!=-1)
		cout<<a[n]<<endl;
	return 0;
}
