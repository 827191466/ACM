#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[101];
	int n;
	cin >> n;
	cin.get();
	for (int i = 0; i<n; i++)
	{
		int flag=1;
		cin.getline(a, 101);
		for(int j=0;j<strlen(a)/2;j++)
		{
			if(a[j]!=a[strlen(a)-1-j])
				flag=0;
		}
		if(flag)
			cout<<"yes"<<endl;
		else 	
			cout<<"no"<<endl;
	}
	return 0;
}
