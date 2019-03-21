#include<iostream>
#include<cstring>
using namespace std;
struct player
{
	int times;
	string name;
};
int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		string a,b;
		int i,j;
		player p[1000];	
		for(i=0;i<1000;i++)
		{
			p[i].times=0;
		}
		int count=0;	
		while(n--)
		{			
			cin>>a>>b;
			if(count==0)
			{
				p[count].name=a;
				p[count+1].name=b;
				p[count+1].times++;
				count+=2;
			}
			else
			{
				for(i=0;i<count;i++)
				{
					if(p[i].name==a)
						break;
				}
				if(i==count)
				{
					p[count].name=a;
					count++;
				}
				for(i=0;i<count-1;i++)
				{
					if(p[i].name==b)
					{
						p[i].times++;
						break;
					}
				}
				if(i==count-1)
				{
					p[count].name=b;
					p[count].times++;
					count++;
				}
			}			
		}
		int c=0;
		for(j=0;j<count;j++)
		{
			if(p[j].times==0)
				c++;
			if(c==2)
				break;
					
		}
		if(c==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
