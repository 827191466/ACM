#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		for(int i=0;i<b+2;i++)
		{
			for(int j=0;j<a+2;j++)
			{
					if(i==0||i==b+1)
					{
						if(j==0||j==a+1)
							cout<<"+";
						else
							cout<<"-";
					}						
					else
					{
						if(j==0||j==a+1)
							cout<<"|";
						else
							cout<<" ";
					}				
			}
			cout<<endl;
		} 
		cout<<endl;
	} 
	return 0;
}
