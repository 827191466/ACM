#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define N 100000
int num[N];
int main() {
	int t, f, i, j, n,sum,max,st,ed,tmp;
	cin >> t;
	for (f = 1; f <= t; f++) {
		cin >> n;
		for (i = 1; i <= n; i++)
			cin >> num[i];
		st = ed = tmp=1;
		max = sum = num[1];
		for (i = 2; i <= n; i++) {
			if (sum + num[i] < num[i]) {
				tmp = i;
				sum = num[i];
			}
			else {
				sum = sum + num[i];
			}
			if (sum > max) {
				max = sum;
				st = tmp;
				ed = i;
			}
		}
		cout << "Case " << f << ":\n" << max << " " << st << " " << ed << endl;	
		if (f != t)
			cout << endl;
	}
	return 0;
}