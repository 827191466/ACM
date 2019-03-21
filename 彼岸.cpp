#include<iostream>
using namespace std;
int main()
{
	int c,n;
	int s[40];
	s[1]=3;
	s[2]=9;
	for(int i=3;i<40;i++)
	{
		s[i]=s[i-1]/3*7; 
	}
	cin>>c;
	while(c--)
	{
		cin>>n;
		cout<<s[n]<<endl;
	}
	return 0;
}

