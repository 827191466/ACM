#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		int s1=0;
		int s2=0;
		int s3=0;
		int t=n;
		while(t!=0)
		{
			s1=s1+t%10;
			t=t/10;
		}
		t=n;
		while(t!=0)
		{
			s2=s2+t%16;
			t=t/16;
		}
		t=n;
		while(t!=0)
		{
			s3=s3+t%12;
			t=t/12;
		}
		if(s1==s2&&s2==s3)
			cout<<n<<" is a Sky Number."<<endl;
		else
			cout<<n<<" is not a Sky Number."<<endl;
	}
	return 0;
}
