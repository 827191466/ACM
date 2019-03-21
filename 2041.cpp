#include <iostream>
using namespace std;
int main()
{
	int n, m, i, a[40] = { 0,0,1,2};
	for (i = 4; i <= 40; ++i)
	{
		a[i] = a[i-2]+ a[i - 1];
	}
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		cout<<a[m]<<endl;
	}
	
	return 0;
}
