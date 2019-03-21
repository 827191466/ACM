#include<iostream>
using namespace std;
#define MOD 10000007
long long power(int a,int n){
	if(n==0)
		return 1;
	long long tmp=power(a,n>>1) % MOD;
	if(n%2!=0)
		return a*tmp*tmp;
	else
		return tmp*tmp;
} 
int main()
{
	return 0;
}

