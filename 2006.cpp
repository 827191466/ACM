#include<iostream>
using namespace std;
int main()
{
    int n,a;
	while(cin>>n)
	{
		int s=1;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a%2!=0)
				s=s*a;
		}
		cout<<s<<endl;
	}	
	return 0;
}
