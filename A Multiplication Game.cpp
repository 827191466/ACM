#include <iostream>
using namespace std; 
int main()
{
	long long count,p,n;
    while(cin>>n)
    {
        count=0;
        p=1;
        while(true)
        {
            if(p>=n)break;
            	count++;
            if(count&1)
				p*=9;
            else 
				p*=2;
        }
        if(count&1)
			cout<<"Stan wins."<<endl;
		else
			cout<<"Ollie wins."<<endl;
    }
    return 0;
}

