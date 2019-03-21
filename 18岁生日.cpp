#include<iostream>
using namespace std;
int main()
{
	int t,y,m,d,i;
	int s=0;
	char a,b;
	cin>>t;
	while(t--)
	{
		cin>>y>>a>>m>>b>>d;
		if(m==2&&d==29)
			cout<<-1<<endl;		    
		else
		{
			int c1=0;
			int c2=0;
			if(m<=2)
			{			
				for(i=y;i<y+18;i++)
				{
					if((i%100!=0&&i%4==0)||(i%400 == 0))
						c1++;
					else
						c2++;
				}
				s=c1*366+c2*365;
			}
			else
			{
				for(i=y+1;i<=y+18;i++)
				{
					if((i%100!=0&&i%4==0)||(i%400 == 0))
						c1++;
					else
						c2++;
				}
				s=c1*366+c2*365;
			}
			cout<<s<<endl;
		}			
	}
	return 0;
}
