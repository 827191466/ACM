#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t,n;
	double m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		double max=0;
		while(n--)
		{
			cin>>m;
			if(m>max)
				max=m;
		}
		cout<<fixed<<setprecision(2)<<max<<endl;
	} 
	return 0;
}
