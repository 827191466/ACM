/*����������
  ƽ������n��ֱ�ߣ��������߹��㣬����Щֱ�����ж����ֲ�ͬ��������
  ���룺n��n<=20��
  �����ÿ������ʵ����Ӧһ���������С�����г������ཻ����������ÿ����Ϊ���ܵĽ�������
  ��������
  4
  �������
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

