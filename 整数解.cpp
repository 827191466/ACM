#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,i,t,flag;
	while(cin>>n>>m){
		if(n==0&&m==0)
			break;
		flag=0;
		for(i=1;i<=sqrt(abs(m));i++)
		{
			if(m%i==0&&m/i+i==n){
				flag=1;
				break;
			}				
		}
		for(i=-1;i>=-sqrt(abs(m));i--)
		{
			if(m%i==0&&m/i+i==n){
				flag=1;
				break;
			}				
		}
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}

