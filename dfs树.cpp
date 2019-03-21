#include<iostream>
#include<vector>
using namespace std;
#define N 200005
vector<int>g[N];
int n, k, u[N] = { 0 }, num[N] = { 0 };

void dfs(int cur, int par) {
	int i, now;
	for (i = 0; i < g[cur].size(); i++) {
		now = g[cur][i];
		if (now == par)
			continue;
		if (u[now])
			num[now]++;
		dfs(now, cur);
		num[cur] += num[now];
	}
}
int main() {
	int i, to, from;
	cin >> n >> k;
	for (i = 0; i < 2 * k; i++) {
		cin >> to;
		u[to] = 1;
	}
	for (i = 1; i < n; i++) {
		cin >> to >> from;
		g[to].push_back(from);
		g[from].push_back(to);
	}
	dfs(1, 0);

}