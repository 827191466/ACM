#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		else
		{
			int x;
			int *a=new int[n+1];
			int count=0;
			for(int i=0;i<n;i++)
			{
				cin>>x;
				a[count]=x;
				count++;
			}
			int flag;
			for(int j=0;j<n;j++)
			{
				if(m>=a[j]&&m<=a[j+1])\
				{
					flag=j+1;
					break;
				}
			}
			for(int k=0;k<n;k++)
			{
				if(k==flag)
				{
					cout<<m<<" ";
				}
				cout<<a[k];
				if(k==n-1)
					cout<<endl;
				else
					cout<<" ";
			}
			delete []a;
		}
	}
	return 0; 
} 
