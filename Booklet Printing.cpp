#include<iostream>
using namespace std;
int main()
{
	int n,m,i,s,t;
	while(cin>>n&&n){
		cout<<"Printing order for "<<n<<" pages:"<<endl;
		if(n==1)
			cout<<"Sheet 1, front: Blank, 1"<<endl;
		else{
			if(n%4!=0){			
				m=(n/4+1)*4+1;
				s=1;
				for(i=1;i<=n/4+1;i++)
				{
					cout<<"Sheet "<<i<<", front: ";
					if(m-s>n)
						cout<<"Blank, ";
					else
						cout<<m-s<<", ";
					cout<<s<<endl;
					cout<<"Sheet "<<i<<", back : "<<s+1<<", ";
					if(m-s-1>n)
						cout<<"Blank"<<endl;
					else
						cout<<m-s-1<<endl;
					s+=2;
				}
			}
			else{
				m=n+1;
				s=1;
				for(i=1;i<=n/4;i++)
				{
					cout<<"Sheet "<<i<<", front: ";
					if(m-s>n)
						cout<<"Blank, ";
					else
						cout<<m-s<<", ";
					cout<<s<<endl;
					cout<<"Sheet "<<i<<", back : "<<s+1<<", ";
					if(m-s-1>n)
						cout<<"Blank"<<endl;
					else
						cout<<m-s-1<<endl;
					s+=2;
				}
			}
		} 
	}
	return 0;
}

