#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string name;
	double a,b,sum;	
	sum=0;
	while(cin>>name>>a>>b)
		sum=sum+a*b;
	cout<<fixed<<setprecision(1)<<sum<<endl;
	return 0;
}
