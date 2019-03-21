#include<iostream>
using namespace std;
int main()
{
	int t,n;
	long long int s[10001];
	s[1]=2;
	for(int i=2;i<10001;i++){
		s[i]=s[i-1]+2*(i-1)*3;
	}
	cin>>t;
	while(t--){
		cin>>n;
		cout<<s[n]<<endl;
	}
	return 0;
}

