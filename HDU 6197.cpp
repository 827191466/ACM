/*#include<cstdio>
#include<algorithm>
#include<iostream>
#define N 500005
using namespace std;
int dp[N],a[N],b[N],n;
int LIS(int *d) {
	memset(dp, 0, sizeof(dp));
	dp[1] = d[1];
	int l, r, mid, len = 1;
	for (int i = 2; i <= n; i++) {
		l = 1;
		r = len;
		while (l <= r) {
			mid = (l + r) / 2;
			if (dp[mid] <= d[i]) l = mid + 1;
			else  r = mid - 1;
		}
		dp[l] = d[i];
		if (l > len) len++;
	}
	return len;
}

int main() {
	int i,t,k,x;
	scanf_s("%d", &t);
	while (t--) {
		scanf_s("%d%d",&n,&k);
		for (i = 1; i <=n; i++) {
			scanf_s("%d", &a[i]);
			b[n - i + 1] = a[i];
		}
		x = max(LIS(a),LIS(b));
		if (n - x <= k)
		{
			cout << "A is a magic array." << endl;
		}
		else {
			cout << "A is not a magic array." << endl;
		}		
	}	
	return 0;
}*/



#include<cstdio>
#include<algorithm>
#include<iostream>
#define N 500005
using namespace std;
int dp[N], a[N], b[N];
int find(int x, int l, int r)
{
	int mid;
	while (l <= r)
	{
		mid = (l + r) >> 1;
		if (dp[mid] == x)
			return mid;
		if (dp[mid] < x)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return l;
}
int main() {
	int n, i, len1, t, k, len2, x;
	scanf_s("%d", &t);
	while (t--) {
		scanf_s("%d%d", &n, &k);
		for (i = 1; i <= n; i++) {
			scanf_s("%d", &a[i]);
			b[n - i + 1] = a[i];
		}
		len1 = 1;
		len2 = 1;
		memset(dp, 0, sizeof(dp));
		dp[0] = a[1];
		for (i = 2; i <= n; i++)
		{
			if (a[i] > dp[len1 - 1])
				dp[len1++] = a[i];
			else {
				x = find(a[i], 0, len1);
				dp[x] = a[i];
			}
		}
		memset(dp, 0, sizeof(dp));
		dp[0] = b[1];
		for (i = 2; i <= n; i++)
		{
			if (b[i] > dp[len2 - 1])
				dp[len2++] = b[i];
			else {
				x = find(b[i], 0, len2);
				dp[x] = b[i];
			}
		}
		x = max(len1, len2);
		if (n - x <= k)
		{
			cout << "A is a magic array." << endl;
		}
		else {
			cout << "A is not a magic array." << endl;
		}
	}
	system("pause");
	return 0;
}
