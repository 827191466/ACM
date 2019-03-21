#include<cstdio>
#include<iostream>
#include<algorithm>
#define N 500001
using namespace std;
int dp[N],c[N];
int find(int x, int l, int r) 
{
	int mid;
	while (l <= r)
	{
		mid = (l + r) >> 1;
		if (c[mid] == x)
			return mid;
		if (c[mid] < x)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return l;
}

int main() {
	int n,i,count,t,len,a,b;
	count = 1;
	while (scanf_s("%d", &n)) {
		for (i = 0; i < n; i++) {
			scanf_s("%d%d", &a, &b);
			c[a] = b;
		}
		len = 1;
		dp[0] = c[1];
		for (i = 2; i <= n; i++)
		{
			if (c[i] > dp[len - 1])
				dp[len++] = c[i];
			else {
				t = find(c[i], 0, len);
				dp[t] = c[i];
			}
		}
		if (len == 1) {
			cout << "Case " << count++ << ":\n" << "My king, at most " << len+1<< " road can be built." <<"\n\n";
		}
		else {
			cout << "Case " << count++ << ":\n" << "My king, at most " << len+1 << " roads can be built." << "\n\n";
		}		
	}
	return 0;
}