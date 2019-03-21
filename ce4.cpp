#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define N 100005
using namespace std;
int b[N];
int ans[N];
int flag[N];
struct node {
	int parent;
	int sum;
}da[N];
int find(int x)
{
	if (x == da[x].parent)
		return x;
	da[x].parent = find(da[x].parent);
	return da[x].parent;
}

void Union(int x, int y)
{
	int a = find(x);
	int b = find(y);
	if (a != b)
	{
		da[a].parent = b;
		da[b].sum += da[a].sum;
	}
}

int main()
{
	int i, t, n, count;
	cin >> t;
	ans[0] = 0;
	while (t--) {
		priority_queue<int>pq;
		count = 0;
		cin >> n;
		for (i = 1; i <= n; i++) {
			cin >> da[i].sum;
			da[i].parent = i;
			flag[i] = 0;
		}
		for (i = 0; i < n; i++) {
			cin >> b[i];
		}
		for (i = n - 1; i > 0; i--) {
			if (flag[b[i] - 1] && b[i] > 1)
				Union(b[i], b[i] - 1);
			if (flag[b[i] + 1] && b[i] < n)
				Union(b[i], b[i] + 1);
			pq.push(da[find(b[i])].sum);
			flag[b[i]] = 1;
			ans[++count] = pq.top();
		}
		for (i = count; i >= 0; i--)
			cout << ans[i] << endl;
	}
	return 0;

