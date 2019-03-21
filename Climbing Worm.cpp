#include<iostream>
using namespace std;
int main()
{
	int n,d,u,t,s;                                    
	while(cin>>n>>d>>u)
	{ 
		if(n == 0 && d == 0 &&  u == 0)
			break;
		t=0;
		s=0;
		while(1)
		{
		   s+=d;
		   t++; 
		   if(s>=n) 
		  	break;
		   s-=u;
		   t++;
		}
		cout<<t<<endl;
	}	
	return 0;  
}

