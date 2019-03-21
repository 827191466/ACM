#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,a,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int *s=new int[n];
		for(i=0;i<n;i++)
			cin>>s[i];
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(s[j+1]<s[j])
				{
					int m=s[j];
					s[j]=s[j+1];
					s[j+1]=m;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			cout<<s[i];
			if(i<n-1)
				cout<<" ";
			else
				cout<<endl;
		} 	
		delete []s;	
	}
	return 0;
}
