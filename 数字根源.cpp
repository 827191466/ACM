#include<iostream>
using namespace std;
int main()
{
	long long int n,m;
	while(cin>>n&&n)
	{	
		while(1){
			m=0;
			while(n)
			{
				m=m+n%10;
				n=n/10;
			}
			if(m < 10){
				cout<< m <<endl;
				break;
			}else{
				n=m;
				continue;
			}
		}
	} 
	return 0;
}

