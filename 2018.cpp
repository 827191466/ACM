#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n&&n>0 && n<55)
	{
		int f1 = 1;
		int f2 = 2;
		int f3 = 3;
		int fn;
		if (n == 1)
			fn = f1;
		else if (n == 2)
			fn = f2;
		else if (n == 3)
			fn = f3;
		else
		{
			for (int i = 4; i <= n; i++)
			{
				fn = f3 + f1;
				f1 = f2;  
				f2 = f3; 
				f3 = fn;    
			}			
		}
		cout << fn << endl;
	}
	return 0;
}
