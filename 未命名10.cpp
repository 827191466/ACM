#include<iostream>
using namespace std;
int s[1000001];
int main()
{
	int n,i;
	s[1]=1;
	s[2]=2;
	for(i=3;i<=1000001;i++)
	{
		if(i%2)
			s[i]=s[i-1]%1000000000;
		else
		{
			s[i]=s[i-2]+s[i/2];
			s[i]%=1000000000;
		}
	}
	while(cin>>n)
	{
		cout<<s[n]<<endl;
	}
	return 0;
}


