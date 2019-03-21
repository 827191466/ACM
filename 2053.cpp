#include<iostream>
using namespace std;
int main()
{
	int n, i;
	while (cin >> n)
	{
		int *a = new int[n];
		for (i = 0; i<n; i++)
			a[i] = 0;
		for (i = 0; i<n; i++)
		{
			if(n%(i+1)==0)
			{
				if(a[n-1]==0)
					a[n-1]=1;
				else
					a[n-1]=0;
			}
		}
		cout << a[n - 1] << endl;
		delete a;
	}
	return 0;
}
