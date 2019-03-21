#include<iostream>
using namespace std;
int main()
{
	int i,a,b,tmp;
	while(cin>>a>>b,a||b){
		int flag=0;
		for(i=0;i<100;i++){
			tmp=a*100+i;
			if(tmp%b==0){
				if(flag)cout<<' ';
				if(i<10)cout<<0;
				cout<<i;
				flag=1;
			}
		}
		cout<<endl;
	}
	return 0;
}
