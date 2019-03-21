#include <iostream>
using namespace std;
int main()
{
	int n,m,i,j;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		else
		{
			int *a=new int[n];
			int *b=new int[m];
			int *c=new int[n];
			for(i=0;i<n;i++)
				cin>>a[i];
			for(i=0;i<m;i++)
				cin>>b[i];
			int count=0;
			for(i=0;i<n;i++)
			{
				int flag=1;
				for(j=0;j<m;j++)
				{
					if(a[i]==b[j])
					{
						flag=0;
						break;
					}
				}
				if(flag)
				{
					c[count]=a[i];
					count++;		
				}
			}
			if(count==0)
				cout<<"NULL"<<endl;
			else
			{
				for(i=0;i<count-1;i++)
				{
					for(j=0;j<count-1-i;j++)
					{
						if(c[j]>c[j+1])
						{
							int t=c[j];
							c[j]=c[j+1];
							c[j+1]=t;
						}
					}
				}
				for(i=0;i<count;i++)
				{
					cout<<c[i];
					if(i==count-1)
						cout<<endl; 
					else
						cout<<" ";
				}
			}
			delete []a;
			delete []b;
			delete []c;
		}	
	}
	return 0;
}
