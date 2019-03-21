#include<iostream>
using namespace std;
int main()
{
	int n;
	double a,b,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if(a+b>c&&a+c>b&&b+c>a&&a-b<c&&a-c<b&&b-c<a&&b-a<c&&b-c<a&&c-a<b&&c-b<a)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
