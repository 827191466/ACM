void dfs1(int cur, int par) {
	int i = now;
	b
}

int main() {
	int i, to, from, k, cur, cnt;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> to >> from;
		g[to].push_back(from);
		g[from].push_back(to);
	}
	dis[0] = 1;
	dfs(1, 0);
	k = dis[n] - 1;
	cur = n;
	cnt = 0;
	while (1) {
		if (cnt >= k - cell(k / 2.0) || par == 0) {
			break;
		}
		cur = par;
		cur = parent[cur];
		cnt++;
	}
	dfs1(cur, par);
	if (num > n - m)
		cout << "Snuke";
	else
		cout << "Fenence";
}