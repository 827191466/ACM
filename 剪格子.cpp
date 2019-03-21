#include<iostream>
using namespace std;
#define N 10000
int num[N][N],sum,tmp;
int vis[N][N];
int dir[4][2] = { {1,0},{0,1},{-1,0},{0,- 1} };
void dfs(int x, int y) {
	int i, j;
	if (tmp == sum / 2) {
		for()
	}
	for (i = 0; i < 4; i++) {
		if (!vis[x + dir[4][0]][y + dir[4][1]]) {
			if (tmp + num[x+dir[4][0]][y+dir[4][1]] < sum / 2)
				{
					tmp += num[x][y] + dir[4][2];
					vis[x][y] = 1;
				}
				else if (tmp + num[x][y] + dir[4][2] == sum / 2) {
			
				}
		}
	
	}
}

void dfs(int st, int cur, int len) {
	int i,now;
	if (len == 4) {
		ret++;
		return;
	}
	for (i = 0; i < g[cur].size(); i++) {
		now = g[cur][i];
		if (!vis[now]) {
			vis[now] = 1;
			dfs(st, now, len + 1);
		}
		else if (vis[now] && now == st) {
			ret++;
			return;
		}
	}
	if (len < 3) {
		for (i = 0; i < g[cur].size(); i++) {
			now = g[cur][i];
			if (!vis[now]) {
				vis[now] = 1;
				dfs(st, now, len + 1);
			}
			else if (vis[now] && now == st) {
				ret++;
				return;
			}
		}
	}
}
int main() {
	int m, n,i,j;
	sum = 0;
	cin >> m >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> num[i][j];
			sum += num[i][j];
		}
	}
	if (sum & 1) {
		cout << "can't";
	}
	else {
		dfs(0, 0);
	}
}


//另一个解法   从边考虑

int main() {
	int i, to from;
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		cin >> to >> from;
		g[to].push_back(from);
		g[from].push_back(to);
	}
	for (i = 1; i <= n; i++) {
		for (j = 0; j < g[i].size(); j++) {
			now = g[i][j];
			ret += (g[i].size() - 1)*(g[now].size() - 1) ;
		}
	}
	cout << ret << endl;
}