#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	int t,a,b,j;
	while(cin>>a>>b)
	{
		if(a>b)
        {
        	t=a;
            a=b;
            b=t;
        }
        double k=(sqrt(5.0)-1.0)/2.0;
        j=a*k;
        if(a!=j*(int)(k+1))
            j++;
        if(a+j==b)
            cout<<0<<endl;//������ƣ�����ʤ��
        else cout<<1<<endl;//��������ƣ�����ʤ��
	} 		
	return 0;
}

