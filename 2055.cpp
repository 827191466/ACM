#include<iostream>
using namespace std;
int main()
{
	int m,y;
	char x;
	cin>>m;
	while(m--)
	{
		cin>>x>>y;
		if(x>='A'&&x<='Z')
		{
			int n=x-64;
			cout<<n+y<<endl;
		}
		else
		{
			int n=96-x;
			cout<<n+y<<endl;
			
		}
	}
	return 0;
}

