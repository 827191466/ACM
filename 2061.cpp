#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,m;	
	while(cin>>n)
	{
		while(n--)
		{
			char a[31];
			double b,c;
			cin>>m;
			double *x=new double[m];
			double *y=new double[m];
			int flag=1;		
			int c1=0;
			int c2=0;
			while(m--)
			{
				cin>>a>>b>>c;
				x[c1]=b;
				y[c2]=c;
				c1++;
				c2++;
				if(c<60)
					flag=0;
			} 
			if(flag)
			{
				double s1=0;
				double s2=0;
				for(int i=0;i<c1;i++)
				{
					s1=s1+x[i]*y[i];
					s2=s2+x[i];
				}
				cout<<fixed<<setprecision(2)<<s1/s2<<endl;
			}
			else
				cout<<"Sorry!"<<endl; 
			if(n!=0)
				cout<<endl;	
			delete []x;
			delete []y;
		}
	}
	return 0;
}
