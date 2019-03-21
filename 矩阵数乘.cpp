/*
给定n个矩阵｛A1,A2,…,An｝，其中Ai与Ai+1是可乘的，i=1，2…，n-1。如何确定计算矩阵连乘积的计算次序，使得依此次序计算矩阵  乘积需要的数乘次数最少。
将矩阵连乘积               简记为A[i:j] ，这里i≤j
	考察计算A[i:j]的最优计算次序。设这个计算次序在矩阵Ak和Ak+1之间将矩阵链断开，i≤k<j，则其相应完全加括号方式为
	计算量：A[i:k]的计算量加上A[k+1:j]的计算量，再加上
A[i:k]和A[k+1:j]相乘的计算量
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
	for (r = 2; r <= n; r++) {//r为区间长度
		for (i = 1; i <= n; i++) {//区间的左端点
			j = i + r - 1;
			if (j > n)
				break;
			for (k = i; k < j; k++) {//将[i,j]分割 
				dp[i][j] = min(dp[i][j],dp[i][k] + dp[k + 1][j] + p[i] * p[k + 1] * p[j]);
			}
		}
	}
}