#include<iostream>
using namespace std;
#define N 502
char g[N][N];
int n, m, k, n1 = 0, cnt = 0;
int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
int vis[N][N] = { 0 };
void dfs(int x, int y) {
	int i,j, dx=0, dy=0;
	vis[dx][dy] = 1;
	cnt++;
	if (cnt >= n1 - k) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (g[i][j] == '.' && vis[i][j] == 0) 
					cout << '#';
				else
					cout << g[i][j];
			}
			cout << endl;
		}
		return;
	}
	for (i = 0; i < 4; i++) {
		dx = x + dir[i][0];
		dy = y + dir[i][1];
		if (dx<0||dx>=n||dy<0||dy>=m) 
			continue;
		if (g[dx][dy] == '#'||vis[dx][dy])
			continue;		
		dfs(dx, dy);
		cnt--;
		vis[dx][dy] = 0;
	}

}
int main() {
	int i, j,sx,sy;
	cin >> n >> m >> k;
	for (i = 0; i < n; i++) {
		cin >> g[i];
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (g[i][j] == '.') {
				n1++;
				sx = i, sy = j;
			}
			dfs(sx, sy);
		}
	}
}



//»ØÍË
#include<iostream>
using namespace std;
#define N 502
          char g[N][N];
int n, m, k, n1 = 0, cnt = 0;
int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
int vis[N][N] = { 0 };
void dfs(int x, int y) {
	int i, j, dx = 0, dy = 0;
	vis[dx][dy] = 1;
	if (cnt >= k)
		return;
	for (i = 0; i < 4; i++) {
		dx = x + dir[i][0];
		dy = y + dir[i][1];
		if (dx < 0 || dx >= n || dy < 0 || dy >= m)
			continue;
		if (g[dx][dy] == '#' || vis[dx][dy])
			continue;
		dfs(dx, dy);
		cnt++;
		if (cnt <= k)
			g[dx][dy] = 'X';

	}

}
int main() {
	int i, j, sx, sy;
	cin >> n >> m >> k;
	for (i = 0; i < n; i++) {
		cin >> g[i];
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (g[i][j] == '.') {
				n1++;
				sx = i, sy = j;
			}
			dfs(sx, sy);
		}
	}
}
