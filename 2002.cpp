#include<iostream>
#include<iomanip>
#include<cmath> 
#define PI 3.1415927
using namespace std;
int main()
{
	double r;
	while(cin>>r)
	cout<<fixed<<setprecision(3)<<pow(r,3)*PI*4/3<<endl;	
	return 0;
}

 
