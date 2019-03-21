/*问题描述：
  平面上有n条直线，且无三线共点，问这些直线能有多少种不同交点数。
  输入：n（n<=20）
  输出：每个测试实例对应一行输出，从小到大列出所有相交方案，其中每个数为可能的交点数。
  样例输入
  4
  样例输出
  0 3 4 5 6
 */
#include<set>
#include<iterator>
#include<iostream>
using namespace std;
set<int>se[100];
int main() {
	int n,i,j;
	while (cin >> n) {		
		for (i = 0; i <= n; i++) {
			se[i].insert(0);	
			for (j = 1; j < i; j++) {
				set<int>::iterator iter = se[i-j].begin();
				while (iter != se[i-j].end())
				{
					se[i].insert(j*(i - j) + *iter);
					iter++;
				}
			}
		}
		set<int>::iterator iter = se[n].begin();
		while (iter != se[n].end())
		{
			cout << *iter << " ";
			iter++;
		}
		cout << endl;	
	}	
	return 0;
}

