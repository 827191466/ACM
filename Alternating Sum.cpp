#include<iostream>
using namespace std;
#define k  100004
int 
long long qpow(long a, long long n) {
	if (n == 0)
		return 1;
	long long d = qpow(a, n >> 1);
	if (n & 1)
		return a * d%mod*d%mod;
	return d * d%mod;

}

int main() {
	int i;
	char ch;
	long long s1 = 0;
	cin >> n >> a >> b >> k;
	for (i = 0; i < k; i++) {
		cin >> ch;
		if (ch == '+')
			s[i] = 1;
		else
			s[i] = -1;
	}
	for (i = 0; i < k; i++) {
		a1 = (a1 + s[i] * qpow(a, n - 1) % mod*qpow(b, i) % mod + mod) % mod;
	}
	return 0;
}