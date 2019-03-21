#include<iostream>
using namespace std;
int main()
{
	int m[13]={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year,month,day;
	char a;
	char b;
	while(cin>>year>>a>>month>>b>>day)
	{
		m[2]=28;
		if((year%4==0&&year%100!=0)||(year%400==0))
		{
			m[2]=29;
		}
		int s=0;
		for(int i=0;i<month;i++)
		{
			s=s+m[i];
		}
		s=s+day;
		cout<<s<<endl;
	}
	return 0;
}
