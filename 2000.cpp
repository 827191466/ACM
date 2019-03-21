#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int s[100] ;
	int f[100] ;
	int m, n;
	int count = 0;
	for (int i = 100; i <= 999; i++)
	{
		int a = i / 100;
		int b = i % 100 / 10;
		int c = i % 10;
		if (i == (pow(a, 3) + pow(b, 3) + pow(c, 3)))
		{
			s[count] = i;
			count++;
		}
	}
	while (cin >> m >> n)
	{
		if (m >= 100 && m <= n && n <= 999)
		{
			int co = 0;
			int flag = 0;
			for (int j = 0; j<count; j++)
			{
				if (s[j] >= m && s[j] <= n)
				{
					flag = 1;
					f[co] = j;
					co++;
				}
			}
			if (flag)
			{
				int q;
				for (int k = 0; k<co - 1; k++)
				{
					q = f[k];
					cout << s[q] << " ";
				}
				q = f[co - 1];
				cout << s[q];
			}
			else
				cout << "no";
			cout << endl;
		} 
		else
			break; 
	}
	return 0;
}
