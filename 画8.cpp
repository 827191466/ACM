#include<iostream>
using namespace std;
int main()
{
	int n,b,s,t,i,j;
	char a;
	cin>>n;
	while(n--){
		cin>>a>>b;
		s=b/6+1;
		if(b%2==0)
			t=b/2-1;
		else
			t=b/2;
		for(i=0;i<b;i++)
		{
			if(i==0||i==t||i==b-1)
			{
				for(j=0;j<s+b-t-2;j++)
				{
					if(j<s)
						cout<<" ";
					else
						cout<<a;
				}
				cout<<endl;
			}else{
				for(j=0;j<2*s+b-t-2;j++)
				{
					if(j>=s&&j<s+b-t-2)
						cout<<" ";
					else
						cout<<a;
				}
				cout<<endl;
			}
		}
		if(n)
			cout<<endl;
	}
	return 0;
}

