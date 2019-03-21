/*
给定由n个整数（包含负整数）组成的序列a[1], a[2], ..., a[n]，求该序列子段和的最大值。当所有整数均为负值时定义其最大子段和为0。
例： -2,11,-4,13,-5,-2      MSS=20
*/
#include<iostream>
using namespace std;
#define N 10000003
int dp[N],st[N];
int main() {
	int i, n, x;
	cin >> n;
	dp[0] = 0;
	for (i = 1; i <= n; i++) {
		cin >> x;
		if (dp[i - 1] > 0) {
			dp[i] = dp[i - 1] + x;
			st[i] = st[i - 1];
		}			
		else
		{
			dp[i] = x;
			st[i] = i;
		}			
	}
	int ans = 0;
	int st1, ed1;
	for (i = 1; i <= n; i++) {
		if (ans < dp[i]) {
			st1 = st[i];
			ed1 = st[i];
			ans = dp[i];
		}			
	}
}