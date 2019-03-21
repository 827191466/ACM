#include<iostream>
using namespace std;
int main()
{
    int n;
    double a;
	while(cin>>n)
	{
		if(n==0)
			continue;
		int c1=0;
		int c2=0;
		int c3=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a<0)
				c1++;
			if(a==0)
				c2++;
			if(a>0)
				c3++;		
		}
		cout<<c1<<" "<<c2<<" "<<c3<<endl;
	}	
	return 0;
}
