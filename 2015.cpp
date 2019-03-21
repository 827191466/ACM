#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n)
	{
		if (n>2&&n<=100)
		{
			int *a=new int[n];
			int count = 0;
			for (int i = 0; i<n; i++)
			{
				cin >> m;
				a[count] = m;
				count++;
			}
			int f1 = 0;
			int f2 = 0;
			for (int j = 1; j<n; j++)
			{
				if (a[f1]<a[j])
				{
					f1 = j;
				}
				if(a[j]<a[f2])
				{
					f2 = j;
				}
			}
			double sum=0;
			for (int k = 0; k<n; k++)
			{
				sum=sum+a[k];
			}
			sum=sum-a[f1]-a[f2];
			double b=sum/(n-2);
			cout<<fixed<<setprecision(2)<<b<<endl;
			delete[]a;
		}
		else
			break;
	}
	return 0;
}
