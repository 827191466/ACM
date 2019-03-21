#include<iostream>
using namespace std;
int main()
{
	int T,m,n,i,j,count,flag;
	cin>>T;
	while(T--)
	{
		flag=1;
		while(cin>>n>>m)
		{		
			if(m==0&&n==0)
				break;
			else
			{
				count=0;
				for(i=1;i<n;i++){
					for(j=i+1;j<n;j++)
					{
						if((i*i+j*j+m)%(i*j)==0)
							count++;	
					}
				}
				cout<<"Case "<<flag<<": "<<count<<endl;
				flag++;
			}
		}
		if(T)
			cout<<endl;
	}
	return 0;
}

