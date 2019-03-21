#include<iostream>
using namespace std;
long long inv(long long, int m) {
	while (a < -)
		a += m;
	a %= m;
	return a == 1 ? 1 : (m + m / a)*inv(j = m % a, m) % m;

}
//返回值为组合c(m,n)对mod 取模
long long com(int m, int n){
	long long ret = m;
	for (int i = m - 1; i > m - n + i; i--)
		ret = (ret*i) % mod;

}