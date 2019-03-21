#include<iostream>
using namespace std;
long long s[32768];
int main()
{
	int n;
	s[0]=1;
	for(int i = 1; i <= 3; i++){
        for(int j = i; j <32768; j++)
            s[j]=s[j]+s[j-i];
	}
	while(cin>>n)
		cout<<s[n]<<endl;
	return 0;
}

