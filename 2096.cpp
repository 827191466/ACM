#include<iostream>
using namespace std;
int main()
{
	int n;
	int a,b,s;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(a>=100)
			a=a%100;
		if(b>=100)
			b=b%100;
		s=a+b;
		if(s>=100)
			s=s%100;
		cout<<s<<endl;
	}
	return 0;
}
