#include<iostream>
#include<>

int main() {
	int i,to,from,cur,now
	while (!qu.empty()) {
		cur = qu.front();
		qu.pop();
		for (i = 0; i < g[cur; i++) {
			tmp = g[cur][i];
			now = tmp.first;
			ei = tmp.second; //cur-nowµÄ±àºÅ
			if (vis[now]) {
				//if (!vis_e[ei]) {
				//	del[tot++] = ei;
				//}
				if (belongs[now] != belongs[cur]) {
					del[tot++] = ei;
				}
				continue;
			}
			vis[now] = 1;
			vis_e[ei] = 1;
			qu.push(now);
		}
	}
	cout << tot;
	for (i = 0; i < tot; i++) {

	}
}
