#include<iostream>
using namespace std;
#define N 100000
int parent[N];
int m, n;
int find(int a) {
	int t = find(a);
	if (t == a)
		return a;
	parent[a] = find(t);
	return parent[a];
}
void Union(int x, int y) {
	x = find(x);
	y = find(y);
	if (x != y)
		parent[x] = y;
}


int main() {
	int i, to, from;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		parent[i] = i;
	for()

}