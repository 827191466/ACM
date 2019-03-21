#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	char s[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		int count=0;
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]>='0'&&s[j]<='9')
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
