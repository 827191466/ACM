#include<iostream>
using namespace std;
int main()
{
	int n,s,t,time;
	while(cin>>n&&n)
	{
		t=0;
		time=0; 
		while(n--)
		{
			cin>>s;
			if(s-t>0)
				time=time+6*(s-t);
			else
				time=time+4*(t-s);
			time+=5;
			t=s;
		} 
		cout<<time<<endl;
	}
	return 0;	
} 
