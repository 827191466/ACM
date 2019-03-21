#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct balloon
{
	int n;
	string color;
};
bool cmp(balloon a,balloon b)
{
	return a.n>b.n;
}
int main()
{
	int n,i,j;
	string str;

	while(cin>>n&&n)
	{
		balloon *t=new balloon[n];
		int count=0;
		while(n--)
		{
			int flag=-1;
			cin>>str;
			for(i=0;i<count;i++)
			{
				if(t[i].color==str)
				{
					flag=i;
					break;
				}
			}
			if(flag==-1)
			{
				t[count].color=str;
				t[count].n=1;
				count++;
			}
			else
				t[flag].n++;		
		}
		sort(t,t+count,cmp);
		cout<<t[0].color<<endl;	
		delete t;
	}	
	return 0;
}
