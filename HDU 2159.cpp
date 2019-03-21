/*
FATE
Time Limit : 2000/1000ms (Java/Other)   Memory Limit : 32768/32768K (Java/Other)
Total Submission(s) : 6   Accepted Submission(s) : 5
Font: Times New Roman | Verdana | Georgia
Font Size: ← →
Problem Description
最近xhd正在玩一款叫做FATE的游戏，为了得到极品装备，xhd在不停的杀怪做任务。久而久之xhd开始对杀怪产生的厌恶感，但又不得不通过杀怪来升完这最后一级。现在的问题是，xhd升掉最后一级还需n的经验值，xhd还留有m的忍耐度，每杀一个怪xhd会得到相应的经验，并减掉相应的忍耐度。当忍耐度降到0或者0以下时，xhd就不会玩这游戏。xhd还说了他最多只杀s只怪。请问他能升掉这最后一级吗？
Input
输入数据有多组，对于每组数据第一行输入n，m，k，s(0 < n,m,k,s < 100)四个正整数。分别表示还需的经验值，保留的忍耐度，怪的种数和最多的杀怪数。接下来输入k行数据。每行数据输入两个正整数a，b(0 < a,b < 20)；分别表示杀掉一只这种怪xhd会得到的经验值和会减掉的忍耐度。(每种怪都有无数个)
Output
输出升完这级还能保留的最大忍耐度，如果无法升完这级输出-1。
Sample Input
10 10 1 10
1 1
10 10 1 9
1 1
9 10 2 10
1 1
2 2
Sample Output
0
-1
1

#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
struct type{
	int a;
	int b;
};
bool LessSort(type m, type n) {
	if (m.b == n.b) {
		return m.a > n.a;
	}
	else
		return m.b < n.b;
}
int main() {
	int n, m, k, s,i,j,f[110][110],tm;
	type tmp;
	while (cin >> n >> m >> k >> s) {
		vector<type>t;
		memset(f, 0,sizeof(f));
		for (i = 0; i < k; i++) {
			cin >>tmp.a >>tmp.b;
			t.push_back(tmp);
		}
		sort(t.begin(), t.end(), LessSort);
		vector<type>::iterator it;
		it = t.begin();
		tm = (*it).b;
		for (it=t.begin()+1; it != t.end(); it++)
		{
			
			if ((*it).b == tm) {
				t.erase(it);
			}
			else {
				tm = (*it).b;
			}
		}
		it = t.begin();
		tm = (*it).a;
		for (it = t.begin() + 1; it != t.end(); it++)
		{
			if ((*it).a <= tm) {
				
				t.erase(it);
			}else{
				tm = (*it).b;
			}
		}
		for(i=1;i<=m;i++){
			for (it=t.begin(); it!=t.end(); it++) {
				for (j = 1; j <=s; j++) {
					if (i>=(*it).b) {
						f[i][j] = max( f[i][j],f[i-(*it).b][j - 1] + (*it).a );
					}
				}
			}
			if ( f[i][s]>= n) {
				cout << m - i << endl;
				break;
			}
		}
		if (i == m + 1)
			cout << -1 << endl;
	}
	return 0;
}*/
看在固定的忍耐度下，打最多怪物获得的最大经验值
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
	int n, m, k, s, i, j, q,f[110][110],a[110],b[110];
	while (cin >> n >> m >> k >> s) {
		memset(f, 0, sizeof(f));
		for (i = 0; i < k; i++) {
			cin >>a[i] >> b[i];
		}
		for (i = 1; i <= m; i++) {
			for (q = 0; q<k; q++) {
				for (j = 1; j <= s; j++) {
					if (i >= b[q]) {
						f[i][j] = max(f[i][j], f[i - b[q]][j - 1] + a[q]);
					}
				}
			}
			if (f[i][s] >= n) {
				cout << m - i << endl;
				break;
			}
		}
		if (i == m + 1)
			cout << -1 << endl;
	}
	return 0;
}