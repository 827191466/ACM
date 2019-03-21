#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	while(cin>>n&&n!=0)
	{
		int *a=new int[n];
		int *b=new int[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(b[i]>b[i+1])
				{
					int t1,t2;
					t1=b[i];
					t2=a[i];
					b[i]=b[i+1];
					a[i]=a[i+1];
					a[i+1]=t2;
					b[i+1]=t1; 
				}
			}
		}
		int count=1;
		for(i=1;i<n;i++)
		{
			if(b[i-1]<=a[i])
				count++;
		}
		cout<<count<<endl;
		delete []a;
		delete []b;
	}
	return 0;
}
