#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m,n,i,j,b;
	while(cin>>m>>n)
	{
		int **a=new int*[m];
		for(i=0;i<m;i++)
		{
			a[i]=new int[n];
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>b;
				a[i][j]=b;
			}
		}
		int c=0;
		int d[2];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(abs(a[i][j])>abs(c))
				{
					c=a[i][j];
					d[0]=i+1;
					d[1]=j+1;
				}
			}
		}
		cout<<d[0]<<" "<<d[1]<<" "<<c<<endl;
		for(i=0;i<m;i++)
		{
			delete [] a[m];
		}
		delete []a;		
	}
	return 0;
}
