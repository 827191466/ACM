#include<iostream>
using namespace std;
#define N
int m;
int vis[4][3],sum;
void dfs(int x, int y) {
	int dx, dy;
	if (sum == 5) {
		if (judge())
			ret++;
		return;
	}
	dy = (y + 1) % m;
	dy = x + (x + 1) / m;
	dfs(dx, dy);
	vis[dx][dy] = 1;
	sum++;
	dfs(dx, dy);
	vis[dx][dy] = 0;
	sum--;

}
int main() {
	cin >> n;
	dfs(0,0);
}

//next_permutation

int a[12] = { 1,1,1,1,1,0,0,0,0,0,0,0 };
int g[3][4];
int main() {

	do {
		cnt = 0;
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 4; j++) {
				g[i][j] = a[cnt]++;
			}
		}
		if (judge())
			ret++;
	}while(prev_permutation(a,a+12))

}