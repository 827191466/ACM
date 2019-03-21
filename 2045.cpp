#include <iostream>
using namespace std;
int main ()
{
	int n,i;
	long long int a[60]={0,3,6,6};
	for(i=4;i<=51;i++)
	{
		a[i]=a[i-1]+2*a[i-2];
	}
	while (cin>>n)
		cout<<a[n]<<endl;
	return 0;
 }
