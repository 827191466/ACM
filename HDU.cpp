#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
#define N 1000
int num[N][N];
int sum[N];
int dp[N] = { 0 };
int main() {
	int n,i,j,k,m;
	while (cin >> n&&n) {
		memset(dp, 0, sizeof(dp));
		int ans =-100000;
		for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					cin >> num[i][j];
				}
			}
			for (i = 0; i < n; i++) {
				memset(sum, 0, sizeof(sum));
				for (j = i; j < n; j++) {
					for (k = 0; k < n; k++) {
						sum[k] += num[j][k];
					}
					dp[0] = sum[0];
					if (dp[0] > ans)
						ans = dp[0];
					for (m = 0; m < n; m++) {
						if (dp[m - 1] < 0)
							dp[m] = sum[m];
						else
							dp[m] = sum[m] + dp[m - 1];
						if (dp[m] > ans)
							ans = dp[m];
					}
				}
			}
			cout << ans << endl;
	}
	//system("pause");
	return 0;
}