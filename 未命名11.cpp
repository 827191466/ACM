#include<iostream>
using namespace std;
int main()
{
	int s[21],c,n;
	s[1]=3;
	s[2]=7;
	for(int i=3;i<21;i++)
	{
		s[i]=s[i-1]*2+s[i-2];
		
	}
	cin>>c;
	while(c--)
	{
		cin>>n;
		cout<<s[n]<<endl;
	}
	return 0;
}

