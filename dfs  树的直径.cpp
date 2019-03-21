#include<iostream>
#include<vector>
using namespace std;
#define N 1002
struct node {
	int index;
	int value;
};
vector <node>g[N];
vector<pair<int, int> >g1[N];//中间一定要加一个空格
int n,dis[N];
void dfs(int cur, int par) {
	int i, now, v;
	dis[cur]=dis[par]+
	pair<int,int> p;
	for (i = 0; i < g[cur].size(); i++) {
		p = g[cur][i];
		now = p.first;
		v = p.second;
		if (now == par)
			continue;
		dis[now] = dis[cur];
		dfs(now, cur);

	}
}
int main() {
	int i, to, from, v;
	node tmp;
	pair tmp1;
	cin >> n;
	for (i = 1; i < n; i++) {
		cin >> to >> from >> v;
		tmp1 = make_pair(from, v);
		g1[to].push_back(tmp1);
		g1[from].push_back(make_pair(to, v));
		/*tmp.index = from, tmp.value = v;
		g[to].push_back(tmp);
		tmp.index = to, tmp.value = v;
		g[from].push_back(tmp);*/
	}
	dis[1] = 0;
	dfs(1, 0);

}