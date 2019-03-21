#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	long long m,sum1,sum2,t,c;
	while(cin>>m&&m!=-1)
	{
		sum1=1;
		sum2=0;
		for(int i=1;i<=m;i++)
		{
			sum2=sum1;
			sum1=sum1*3;
			
		}
		cout<<sum1<<", "<<sum2<<endl;
	} 
	return 0;
}
