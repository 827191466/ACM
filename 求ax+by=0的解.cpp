#include<iostream>
using namespace std;
int extend_gcd(int a, int b, int x, int y) {
	int m,tmp;
	if (a == 0 && b == 0)	return -1;
	else if (b== 0){
		x = 0, y = 1;
		return a;
	}
	m=extend_gcd(b, a%b, x, y);
	tmp = x;
	x = y;
	y = tmp - a / b * y;
	return m;
}

int mian() {
	int a, b, c,d,x,y;
	cin >> a >> b >> c;
	d = extend_gcd(a, b, x, y);
	if (c%d) {
		cout << -1 << endl;
		return 0;
	}
	for (x = 0; ; x++) {
		cout << (c / d * x + b / d) << ' ' << (c / d * y - a / d) << endl;
	}
	
}