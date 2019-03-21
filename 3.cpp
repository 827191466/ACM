#include<iostream>
using namespace std;
int extend_gcd(int a, int b, int &x, int &y) {
	int m, tmp;
	if (a == 0 && b == 0)	return -1;
	else if (b == 0) {
		x = 0, y = 1;
		return a;
	}
	m = extend_gcd(b, a%b, x, y);
	tmp = x;
	x = y;
	y = tmp - a / b * y;
	return m;
}

int mian() {
	int a, b, m,d,x,y,i;
	cin >> a >> b >> m;
	d = extend_gcd(a, m, x, y);
	if (b%d) {
		cout << "нч╫Б" << endl;
		return 0;
	}
	for (i = 0; i < d; i++) {
		cout << (x*b/ d + i * m / d) << endl;
	}
	return 0;
}