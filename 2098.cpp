#include<iostream>
#include<cmath>
using namespace std;
int judge(int a)
{
	int flag=1;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		int c=0;
		for(int i=3;i<n/2;i+=2)
		{
			if(judge(i)&&judge(n-i))
				c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
