#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[10000];
	int n;
	cin >> n;
	cin.get();
	for (int i = 0; i<n; i++)
	{
		int count=0;
		cin.getline(a, 10000);
		for(int j=0;j<strlen(a);j++)
		{
			if(a[j]<0)
				count++;
		}
		cout<<count/2<<endl;
	}
	return 0;
}
