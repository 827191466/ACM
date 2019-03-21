#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int m,n,i,j;
	while(cin>>n>>m)
	{
		double s1=0;
		double s2=0;
		double *t=new double[m];
		int **a=new int*[n];
		for(i=0;i<n;i++)
		{
			a[i]=new int[m];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
			}	
		}
		for(i=0;i<n;i++)
		{
			s1=0;
			for(j=0;j<m;j++)
				s1=s1+a[i][j];
			cout<<fixed<<setprecision(2)<<s1/m;
			if(i==n-1)
				cout<<endl;
			else
				cout<<" ";		
		}
		for(i=0;i<m;i++)
		{
			s2=0;
			for(j=0;j<n;j++)
				s2=s2+a[j][i];				
			t[i]=s2/n;
		 	cout<<fixed<<setprecision(2)<<t[i];
			if(i==m-1)
				cout<<endl;
			else
				cout<<" ";
		}
		int count=0;
		int flag;
		for(i=0;i<n;i++)
		{		
			flag=1;
			for(j=0;j<m;j++)
			{
				if(a[i][j]<t[j])
				{
					flag=0;
					break;
				}
			}
			if(flag)
				count++;
		}
		cout<<count<<endl<<endl;
		for(i=0;i<n;i++)
		{
			delete [] a[i];
		}
		delete []a;	
		delete[]t;		
	}
	return 0;
}
