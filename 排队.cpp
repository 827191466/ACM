#include<iostream>
using namespace std;
#define MOD 1000000007
#define N 3 
struct matrix{
	long long m [N][N];
};
matrix mul(matrix a,matrix b){
	int i,j,k;
	matrix tmp;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			tmp.m[i][j]=0;
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			for(k=0;k<N;k++){
				tmp.m[i][j]+=a.m[i][k]*b.m[k][j]%MOD;
			}
		}
	}
	return tmp;
}
matrix pow(matrix m,long long n){
	matrix tmp;
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			tmp.m[i][j]=0;
		}
	}
	for(i=0;i<N;i++){
		tmp.m[i][i]=1;
	}
	while(n){
		if(n&1) tmp=mul(tmp,m);
		m=mul(m,m);
		n>>=1;
	} 
	return tmp;	
} 
int main()
{
	int t,i,j;
	long long n;
	cin>>t;
	while(t--){
		cin>>n;
		matrix a;
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				a.m[i][j]=0;
			}
		}
		a.m[0][0]=1;
		a.m[0][2]=1;
		a.m[1][0]=1;
		a.m[2][1]=1;
		a=pow(a,n-2);
		long long ans = (a.m[2][0] * 6 + a.m[2][1] * 4 + a.m[2][2] * 3) % MOD;
		cout<<ans<<endl;
	} 
	return 0;
}

