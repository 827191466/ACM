#include<iostream>
using namespace std;
int main()
{
	long long s[31];
	int n;
	s[0]=1;
	s[2]=3;
	for(int i=4;i<31;i+=2){
		s[i]=s[i-2]*4-s[i-4];
	} 
	while(cin>>n){
		if(n==-1)
			break;
		cout<<s[n]<<endl;
	}	
	return 0;
}
