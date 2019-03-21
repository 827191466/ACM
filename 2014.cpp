#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int a[100];
	for(int j=0;j<100;j++)
	{
		a[j]=2*(j+1); 
	}
	while(cin>>n>>m)
	{
		if(n>100)
			break;
		else
		{
			double t=n;
			double b;
			int f=0	;			
			while(m<t)
			{			
				double s=0;
				for(int i=f*m;i<(f+1)*m;i++)
				{
					s=s+a[i];
				}
				b=s/m;
				cout<<b<<" ";
				t=t-m;
				f++;
			}
			double s=0;
			for(int i=f*m;i<n;i++)
			{
					s=s+a[i];
			}
			b=s/t;
			cout<<b<<endl;
		}
	}
	return 0;
} 
