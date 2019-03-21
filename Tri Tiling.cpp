#include<iostream>
using namespace std;
int main()
{
	long long int s[31];
	int n,t;
	s[0]=0;
	s[4]=11;
	s[2]=3;
	for(int i=6;i<31;i+=2){
		t=i-4;
		s[i]=s[i-2]*3+2;
		while(t!=0){
			s[i]=s[i]+s[t]*2;
			t-=2;	
		}		
	} 
	while(cin>>n&&n!=-1){
		if(n%2==0)
			cout<<s[n]<<endl;
	}	
	return 0;
}

