#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
	while(cin>>a>>b)
	{
		if(a>b)
	    {
	    	int t=a;
	    	a=b;
	    	b=t;
	    }
		int s1=0;
		int s2=0;
		for(int i=a;i<=b;i++)
		{
			if(i%2==0)
				s1=s1+i*i;
			if(i%2!=0)
				s2=s2+i*i*i;				
		}
		cout<<s1<<" "<<s2<<endl;
	}	
	return 0;
}
