#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	while(cin>>n)
	{
		int *a=new int[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for (j = 1;; j++)
		{
			int flag=1;
			for (i = 0; i < n; i++)
			{
				if (j%a[i] != 0)
					flag=0;
			}
			if (flag)
			{
				cout << j << endl;
				break;
			}
		}
	}
	return 0;	
}
