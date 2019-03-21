#include<iostream>
#include<cmath>
using namespace std;
long long int hanoi(int n)
{
	if(n == 1)
	return 2;
	else
	return hanoi(n - 1) * 3 + 2;
}
int main()
{
	int t,n; 
	cin >> t;
	while(t--)
	{
		cin >> n;
		if(n > 1)
		cout << hanoi(n - 1) + 2 << endl;
		else
		cout << hanoi(n) << endl;	
	}
        return 0;
}
