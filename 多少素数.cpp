/*#include<ctime>
#include<cstdlib>

long long qpow(long long a,long long n,long long p){
	long long tmp;
	if(n==1) 
	return a;
	tmp=qpow(a,n>>1,p);
	if(n&1) return a*tmp%p*tmp%p;
	return tmp*tmp%p;
}
//随机测试法
bool isPrime(int x){
	int i;
	long long a;
	srand(time(0));
	for(i=0;i<4;i++){
		a=2+rand()%(x-2); //2~x-1
		if(qpow(a,x-1,x)!=1)
		return false; 
	}
	return true;
} */
#include<iostream>
using namespace std;
bool isPrime(int x){//判断是否为素数 
	int i;
	if((!(x&1)&&x!=2)||x==1) //偶数 
	return false;
	else if(x==2)
	return true;
	for(i=3;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}
int main()
{
	
	long long count,n;
	long long a;
	while(cin>>n){
		count=0;
		while(n--){
			cin>>a;
			if(isPrime(a)) 
				count++;			
		}
		cout<<count<<endl;
	}
	return 0;
}

