#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>m;
		int s=3;
		for(int i=0;i<m;i++)
		{
			s=(s-1)*2;
		}
		cout<<s<<endl;
	}
	return 0;
}

