#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int m;
	long long int x[25]={0,0,1};
	int i;
	for(i=3;i<=20;i++)
	{
		x[i]=(i-1)*(x[i-1]+x[i-2]);
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		int n;
		cin>>n;
		double fm=1;
		for(i=1;i<=n;i++)
		{
			fm=fm*i;
		}
		cout<<fixed<<setprecision(2)<<x[n]/fm*100<<"%"<<endl;
	}
	return 0;
}
