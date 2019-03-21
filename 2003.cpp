#include<iostream>
#include<iomanip>
#include<cmath> 
using namespace std;
int main()
{
	double a;
	while(cin>>a)
	cout<<fixed<<setprecision(2)<<abs(a)<<endl;	
	return 0;
}
