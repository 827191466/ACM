#include<iostream>
using namespace std;
int main()
{
	double a;
	while(cin>>a)
	{
		if(a>=0&&a<=100)
		{
			int b=a/10;
			switch(b)
			{
				case 10:
					cout<<"A"<<endl;
					break;
				case 9:
					cout<<"A"<<endl;
					break;
				case 8:
					cout<<"B"<<endl;
					break;
				case 7:
					cout<<"C"<<endl;
					break;
				case 6:
					cout<<"D"<<endl;
					break;
			    default:
			    	cout<<"E"<<endl;
			    	break;								
			}
		}
		else
			cout<<"Score is error!"<<endl;	
	}
	return 0;
}
