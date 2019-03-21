/*
FATE
Time Limit : 2000/1000ms (Java/Other)   Memory Limit : 32768/32768K (Java/Other)
Total Submission(s) : 6   Accepted Submission(s) : 5
Font: Times New Roman | Verdana | Georgia
Font Size: �� ��
Problem Description
���xhd������һ�����FATE����Ϸ��Ϊ�˵õ���Ʒװ����xhd�ڲ�ͣ��ɱ�������񡣾ö���֮xhd��ʼ��ɱ�ֲ��������У����ֲ��ò�ͨ��ɱ�������������һ�������ڵ������ǣ�xhd�������һ������n�ľ���ֵ��xhd������m�����Ͷȣ�ÿɱһ����xhd��õ���Ӧ�ľ��飬��������Ӧ�����Ͷȡ������ͶȽ���0����0����ʱ��xhd�Ͳ���������Ϸ��xhd��˵�������ֻɱsֻ�֡������������������һ����
Input
���������ж��飬����ÿ�����ݵ�һ������n��m��k��s(0 < n,m,k,s < 100)�ĸ����������ֱ��ʾ����ľ���ֵ�����������Ͷȣ��ֵ�����������ɱ����������������k�����ݡ�ÿ��������������������a��b(0 < a,b < 20)���ֱ��ʾɱ��һֻ���ֹ�xhd��õ��ľ���ֵ�ͻ���������Ͷȡ�(ÿ�ֶֹ���������)
Output
��������⼶���ܱ�����������Ͷȣ�����޷������⼶���-1��
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
���ڹ̶������Ͷ��£����������õ������ֵ
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