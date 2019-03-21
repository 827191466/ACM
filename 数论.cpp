#include<iostream>
using namespace std;

int cf(int n, int a[100][2]) {
	int i, cnt = 0;
	for (j = 2; i <= n; i++) {
		while (n%i == 0) {
			a[cnt][0] = i, a[cnt][1]++;
			n /= i;
		}
	}
}

int gcd(int a, int b) {
	if (b == 0)
		return a;
	int tmp = a;
	a = b;
	b = tmp % b;
	gcd(a, b);
}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);//欧几里德辗转相除
}


//二进制求最大公因数
int stein(int a, int b) {
	int r = 0;
	a = abs(a), b = abs(b);
	if (a < b)
		swap(a, b);
	while (b > 0) {
		if (!(a & 1) && !(b & 1)) {
			a >>= 1, b >= 1;//a=a>>1;
			r++;
		}
		else if (!(a & 1) && (b & 1))
			a >>= 1;
		else if ((a & 1) && !(b & 1))
			b >>= 1;
		return a << r;	
	}
}


//最大公因数
return abs(a)*abs(b) / gcd(a, b);
int main() {
	int n, m;
	cin >> n, m;
	if(gcd(2n,m)==1)
}