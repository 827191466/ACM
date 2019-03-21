#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		else
		{
			int count=0;
			for(int i=n;i<=m;i++)
			{
				int flag=1;
				int s=i;
				int t=i;
				while(s!=0)
				{
					if(s%10==4)
					{
						flag=0;
						count++;
						break;
					}
					s=s/10;
				}
				if(flag)
				{
					while(t!=0)
					{
						if(t%100==62)
						{
							count++;
							break;
						}
						t=t/10;
					}
			    }
			}
			cout<<m-n+1-count<<endl;
		}
	}
	return 0;
}
