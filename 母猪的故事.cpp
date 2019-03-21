#include<iostream>
using namespace std;
int main()
{
	int s[20],t,n;
	s[0]=1;
	s[1]=1;
	s[2]=2;
	for(int i=3;i<20;i++)
		s[i]=s[i-1]*2-s[i-3];
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<s[n]<<endl;
	}
	return 0;
}

