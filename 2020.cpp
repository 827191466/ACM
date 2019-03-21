#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n&&n!=0)
	{
		int *a=new int[n];
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			a[count]=m;
			count++;
		}
		for(int j=0;j<n-1;j++)
		{
			for(int k=0;k<n-j-1;k++)
			{
				if(abs(a[k])<abs(a[k+1]))
				{
					int t=a[k];
					a[k]=a[k+1];
					a[k+1]=t;
				}
			}
		}
		for(int q=0;q<n;q++)
		{
			cout<<a[q];
			if(q==n-1)
				cout<<endl;
			else
				cout<<" ";
		}
		delete []a;
	}
	return 0; 
} 
