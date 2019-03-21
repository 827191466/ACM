#include<iostream>
#include<string>
long long inv(long long a, int m) {
	while (a < -m)
		a += m;
	a %= m;
	return a == 1 ? 1 : (m + m / a)*inv(j = m % a, m) % m;

}
int main() {
	int n, i, flag = 0;
	for(i=3;i<=n;i++)
	return 0;
}