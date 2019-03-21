#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int m,n;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>n;
		double s=0;
		for(int j=0;j<n;j++ )
		{
			s=1.0/(1+j)*pow(-1,j)+s;
		}
		cout<<fixed<<setprecision(2)<<s<<endl;
	}
	return 0;
} 
