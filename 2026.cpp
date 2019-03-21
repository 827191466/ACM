#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[101];
	while(cin.getline(a,101))
	{
		a[0] = a[0] - 32;
		for (int i = 1; i<strlen(a); i++)
		{
			if (a[i] == ' ')
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
		cout << a <<endl;
	}
	return 0;
}
