/*
����n�������A1,A2,��,An��������Ai��Ai+1�ǿɳ˵ģ�i=1��2����n-1�����ȷ������������˻��ļ������ʹ�����˴���������  �˻���Ҫ�����˴������١�
���������˻�               ���ΪA[i:j] ������i��j
	�������A[i:j]�����ż�������������������ھ���Ak��Ak+1֮�佫�������Ͽ���i��k<j��������Ӧ��ȫ�����ŷ�ʽΪ
	��������A[i:k]�ļ���������A[k+1:j]�ļ��������ټ���
A[i:k]��A[k+1:j]��˵ļ�����
*/
#include<iostream>
using namespace std;
#define N 102
#define INF 0x3f3f3f3f
int p[N], dp[N][N] = { 0 };
int main() {
	int n, i, j, k, r;
	cin >> n;
	for (i = 1; i <= n + 1; i++)
		cin >> p[i];
	for (i = 1; i <= n; i++)
		for (j = i + 1; j <= n; j++)
			dp[i][j] = INF;
	for (r = 2; r <= n; r++) {//rΪ���䳤��
		for (i = 1; i <= n; i++) {//�������˵�
			j = i + r - 1;
			if (j > n)
				break;
			for (k = i; k < j; k++) {//��[i,j]�ָ� 
				dp[i][j] = min(dp[i][j],dp[i][k] + dp[k + 1][j] + p[i] * p[k + 1] * p[j]);
			}
		}
	}
}