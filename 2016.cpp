#include<iostream>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n)
	{
		if (n == 0)
			break;
		else
		{
			int *a=new int[n];
			int count = 0;
			for (int i = 0; i<n; i++)
			{
				cin >> m;
				a[count] = m;
				count++;
			}
			int flag = 0;
			for (int j = 1; j<n; j++)
			{
				if (a[flag]>a[j])
				{
					flag = j;
				}
			}
			if (flag != 0)
			{
				int temp = a[0];
				a[0] = a[flag];
				a[flag] = temp;
			}
			for (int k = 0; k<n; k++)
			{
				cout << a[k];
				if (k<n - 1)
					cout << " ";
				else
					cout << endl;
			}
			delete[]a;
		}
	}
	return 0;
}
