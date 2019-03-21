#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
			break;
		else
		{
			int s = 1;
			for (int i = 0; i<m; i++)
			{
				s *= n;
				s %= 1000;
			}
			cout << s << endl;
		}
	}
	return 0;
}
