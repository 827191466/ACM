#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n&&n!=0&&n<100)
	{
		int s=0;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			while(m!=0)
			{
				if(m/100!=0)
				{
					s=s+m/100;
					m=m%100;
				}
				else if(m/50!=0)
				{
					s=s+m/50;
					m=m%50;
				}
				else if(m/10!=0)
				{
					s=s+m/10;
					m=m%10;
				}
				else if(m/5!=0)
				{
					s=s+m/5;
					m=m%5;
				}
				else if(m/2!=0)
				{
					s=s+m/2;
					m=m%2;
				}
				else if(m/1!=0)
				{
					s=s+m/1;
					m=m%1;
				}
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
