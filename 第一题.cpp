#include<iostream>
using namespace std;
long long power(int a,int n){
	if(n==0)
		return 1;
	long long tmp=power(a,n>>1);
	if(n%2!=0)
		return a*tmp*tmp;
	else
		return tmp*tmp;
} 
int main()
{
	int t,n;
	long long sum;
	cin>>t;
	while(t--){
		cin>>n;
		sum=n*(1+n)/2;
		for(int i=0;i<31;i++){
			if(power(2,i)<=n){
				sum-=power(2,i)*2;
				continue;
			}
			break;
		}
		cout<<sum<<endl;
	}
	return 0;
}

