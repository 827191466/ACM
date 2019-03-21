#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[101];
	int i, j;
	while (cin >> a)
	{
		int count = 0;
		char c = a[0];
		for (i = 1; i<strlen(a); i++)
		{
			if (a[i]>c)
			{
				c = a[i];
			}
		}
		for (int i = 0; i<strlen(a); i++)
		{
			cout << a[i];
			if (a[i] == c)
				cout << "(max)";
		}
		cout << endl;
	}
}
