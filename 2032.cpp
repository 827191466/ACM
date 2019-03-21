#include <iostream>
using namespace std;
int main()
{
	int n,a[3],b[3],c[3];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[0]>>b[0]>>c[0];
		cin>>a[1]>>b[1]>>c[1];
		c[2]=c[0]+c[1];
		b[2]=b[0]+b[1];
		a[2]=a[0]+a[1];
		if(c[2]>59)
		{
			b[2]=b[2]+c[2]/60;
			c[2]=c[2]%60;
		}
		if(b[2]>59)
		{
			a[2]=a[2]+b[2]/60;
			b[2]=b[2]%60;
		}
		cout<<a[2]<<" "<<b[2]<<" "<<c[2]<<endl;
	}
	return 0;
}
