#include<iostream>
using namespace std;
long long power(int a,int n){
	if(n==1)
		return 10;
	long long tmp=power(a,n>>1);
	if(n%2!=0)
		return a*tmp*tmp;
	else
		return tmp*tmp;
}
int main()
{
	int t,k,x,c,m;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>x>>m>>k>>c;
		int tt=(power(10,m)-1)/9*x%k;
		cout<<"Case #"<<i<<":"<<endl;
		cout<<power(10,m)<<endl;
		cout<<tt<<endl;
		if(tt==c)
			cout<<"Yes"<<endl;
		else		
			cout<<"No"<<endl;		
	} 
	return 0;
}


