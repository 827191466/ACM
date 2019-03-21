#include<iostream>
#include<cstring>
#include <map>
#include<iterator>
using namespace std;
char a[10000];
int main()
{
	int n,i,j,count,flag;
	cin>>n;	
	while(n--)
	{
		map <char,int> m;
		map<char,int>::iterator it;
		count=0;
		cin>>a;
		for(i=0;i<strlen(a);i++)
		{
			m[a[i]]=0;
		}
		for(j=0;j<strlen(a);j++)
		{
			m[a[j]]++;
		}	
		for(it=m.begin();it!=m.end();it++){
			if(it->second==1)
				cout<<it->first;
			else
				cout<<it->first<<it->second;
		}
		cout<<endl;
	}	
	return 0;
}

