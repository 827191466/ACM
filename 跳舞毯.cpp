#include<iostream>
using namespace std;
long long s[1001];
int main()
{
	int n,t; 
	s[1]=0;
	s[2]=2;
	s[3]=2;
	for(int i=4;i<1001;i++){
		s[i]=(s[i-1]+2*s[i-2])%10000;
	}
	while(cin>>n&&n)
		cout<<s[n]%10000<<endl;
	return 0;
}

