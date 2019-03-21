/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define N 1002
vector<int>g[N];
int n, m;
int vis[N] = { 0 };
int dfs_num[N], cnt = 1;
int dis[N];
void dfs(int cur) {
	int i,j, k;
	vis[cur] = 1;
	dfs_num[cur] = cnt++;//dfs编号
	for (i = 0; i < g[cur].size(); i++) {
		k = g[cur][i];
		dis[k] = dis[cur] + 1;
		for (j = 0; j < g[k].size(); j++)
			dis[k] = min(dis[k], dis[g[k][j]] + 1);
		if (!vis[k])
			dfs(k);
	}
}
int main() {
	int i, x, y;
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
}*/




#include<iostream>
#include<vector>
using namespace std;
#define N 102
vector<int>g[N];
int n,dis[N],max_dis,max_index;
//parent为cur的父节点
void dfs(int cur, int parent) {
	int i,now;
	dis[cur] = dis[parent] + 1;
	if (max_dis < dis[cur]){
		max_dis = dis[cur];
		max_index = cur;
	}
	for (i = 0; i < g[cur].size(); i++) {
		now = g[cur][i];
		if (now == parent)
			continue;
		dfs(now, cur);
		
	}
}
int main() {
	int i,m,to,from,t,ret;
	cin >> t;
	while (t--) {
		cin >> m;
		for (i = 0; i < N; i++)
			g[i].clear();
		for (i = 0; i < m - 1; i++) {
			cin >> to >> from;
			g[to].push_back(from);
			g[from].push_back(to);
		}		
		max_dis = 0;
		dis[0] = -1;
		dfs(1,0);
		memset(dis, 0, sizeof(dis));
		dis[0] = -1;
		max_dis = 0;
		dfs(max_index, 0);
		ret += max_dis;
	}
	cout << ret << endl;
	return 0;
}