#include<iostream>
using namespace std;
int main()
{
	int s[31];
	s[1]=1;
	s[2]=3;
	int t,n;
	for(int i=3;i<31;i++)	{
		s[i]=s[i-1]+2*s[i-2];
	} 
	cin>>t;
	while(t--){
		cin>>n;
		cout<<s[n]<<endl;
	}
	return 0;
}

