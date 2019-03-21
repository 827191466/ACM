#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
	while(cin>>n>>m)
	{
		double s=n;
		double t=n;
		for(int i=0;i<m-1;i++)
		{	
			t=sqrt(t);
			s=s+t;
		}
		cout<<fixed<<setprecision(2)<<s;
	}	
	return 0;
}
