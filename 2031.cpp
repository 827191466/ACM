#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m,n,i,j,b;
	int t[1000];
	char a[6]={'A','B','C','D','E','F'};
	while(cin>>m>>n&&n>=2&&n<=16)
	{
		if(n==10)
			cout<<m;
		else
		{
			b=abs(m);
			int count=0;
			while(b!=0)
			{				
				t[count]=b%2;
				b=b/2;
				count++;
			}
			if(m<0)
			{
				for(i=0;i<count;i++)
				{
					if(t[i]==0)
						t[i]=1;
					if(t[i]==1)
						t[i]=0;
				}
				t[0]++;
				i=0;
				while(t[i]==2)
				{
					t[i]=0;
					i++;
					t[i]++;
				}
			}
			if(n!=2)
			{
			}
			for(int i=count-1;i>=0;i--)
			{
				if(t[i]>=10)
				{
					cout<<a[t[i]-10];
				}
				else
					cout<<t[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
