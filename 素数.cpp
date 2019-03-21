#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdio>
#include <ctime>
using namespace std;
#define N 6 
#define M 1000003
int a[]={12,34,13,8,19,22}; 
int vis[N],x[N]; 
int k=3,cnt=0;
long long prime[M],check[M];
int tot=0;
//将素数打表 埃氏筛法 
void gPrime(){
	int i,j;
	for(i=2;i<M;i++){
		if(check[i]==0){
			prime[tot++]=i;
			for(j=2;i*j<M;j++){
				check[i*j]=1; //表示i的倍数都标记为1 
			}
		}
	}	
}

//欧拉筛法  
void ePrime(){
	int i,j;
	for(i=2;i<M;i++){
		if(check[i]==0){
			prime[tot++]=i;	
		}
		for(j=0;j<tot;j++){
			if(prime[j]*i>=M)
			break;
			check[prime[j]*i]=1;
			if(i%prime[j]==0)
			break;
		}
	}	
}

long long qpow(long long a,long long n,long long p){
	long long tmp;
	if(n==1) 
	return a;
	tmp=qpow(a,n>>1,p);
	if(n&1) return a*tmp%p*tmp%p;
	return tmp*tmp%p;
}
//随机测试法
bool isFrime(int x){
	int i;
	long long a;
	srand(time(0));
	for(i=0;i<4;i++){
		a=2+rand()%(x-2); //2~x-1
		if(qpow(a,x-1,x)!=1)
		return false; 
	}
	return true;
} 

bool isFrimea(int x){//判断是否为素数 
	int i;
	if(!(x&1)&&x!=2) //偶数 
	return false;
	else if(x==2)
	return true;
	for(i=3;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}

void dfs(int st,int dep){
	int i,sum;
	if(dep>=k){
		sum=0;
		for(i=0;i<k;i++){
			sum+=x[i];	
		}
		if(isFrime(sum)) cnt++;
		return ;
	}
	for(i=st;i<N;i++){
		x[dep]=a[i];
	    dfs(i+1,dep+1);	
    }	
	 
}
int main()
{
	ios::sync_with_stdio(false);
	dfs(0,0);
    cout<<cnt<<endl;
	return 0;
}


