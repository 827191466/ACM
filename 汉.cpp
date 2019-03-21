#include<iostream>   
#include<cmath>   
using namespace std;
#define M 99999999
int main()
{
	int i, n, x, min, f[65];
	f[1] = 1;
	f[2] = 3;
	for (i = 3; i <= 65; i++)
	{
		min = M;
		for (x = 1; x < i; x++)
		{
			if ((2 * f[x] + pow(2, i - x) - 1) < min)
			{
				min = 2 * f[x] + pow(2, i - x) - 1;
			}
		}
		f[i] = min;
	}
    while(cin>>n)
    	cout<<f[n]<<endl;
	return 0;
}

