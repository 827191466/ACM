#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	char m[51];
	cin>>n;
	for(int j=0;j<n;j++)
	{		
		cin>>m;
		if(strlen(m)>=8&&strlen(m)<=16)
		{
			int flag[4]={0,0,0,0};
			for(int i=0;i<strlen(m);i++)
			{
				if(m[i]>='A'&&m[i]<='Z')
				{
					flag[0]=1;
					continue;
				}
				if(m[i]>='a'&&m[i]<='z')
				{
					flag[1]=1;
					continue;
				}
				if(m[i]>='0'&&m[i]<='9')
				{
					flag[2]=1;
					continue;
				}
				if(m[i]=='~'||m[i]=='!'||m[i]=='@'||m[i]=='#'||m[i]=='$'||m[i]=='%'||m[i]=='^')
				{
					flag[3]=1;	
					continue;	
				}
			}
			int count=0;
			for(int k=0;k<4;k++)
			{
				if(flag[k]==1)
					count++;
			}
			if(count<3)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}

