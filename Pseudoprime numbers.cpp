#include<iostream>
#include<cmath>
using namespace std;
long long power(long long a,long long n,long long mod){
	if(n==0)
		return 1;
	long long tmp=power(a,n>>1,mod);
	if(n%2!=0)
		return (a*tmp*tmp)%mod;
	else
		return (tmp*tmp)%mod;
} 
int main()
{
	long long p,a;
	int i,flag;
	while(cin>>p>>a){
		if(p==0&&a==0)
			break;
		flag=0;
		if(p==1)
			flag=1;
		for(i=2;i<=sqrt(p);i++){
			if(p%i==0)
				flag=1;
		}
		if(flag){
			if(power(a,p,p)==a)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl; 			
		}else
			cout<<"no"<<endl;
	}
	return 0;
}

