#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	while(cin>>x>>y)
	{
		if(x==0&&y==0)
		{
			continue;
		}
		else
		{	
			if(x>=-39&&x<y&&y<=50)
			{
				int flag=1;
				for(int i=x;i<=y;i++)
				{
					int s=i*i+i+41;
					for(int j=2;j<sqrt(s);j++)
					{
						if(s%j==0)
							flag=0;
					}
				}
				if(flag)
					cout<<"OK"<<endl;
				else
					cout<<"Sorry"<<endl;
			}
			else
				break;
		}
	}
} 
