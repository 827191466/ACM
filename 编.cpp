#include<iostream>
#include<cstring>
using namespace std;
char a[10000];
char b[26];
int main()
{
	int n,i,j,count,flag;
	cin>>n;	
	while(n--)
	{
		count=0;
		cin>>a;
		for(i=0;i<strlen(a);i++)
		{
			flag=0;
			for(j=0;j<count;j++){
				if(a[i]==b[j])
				{
					flag=1;
					break;
				}
			}
			if(flag)
				continue;
			else
			{
				b[count]=a[i];
				count++;
				int s=1;
				for(j=i+1;j<strlen(a);j++)
				{
					if(a[j]==a[i])
						s++;
				}
				if(s==1)
					cout<<a[i];
				else
					cout<<a[i]<<s;
			}
		}
		cout<<endl;
	}	
	return 0;
}

