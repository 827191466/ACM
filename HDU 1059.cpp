/*
Dividing
Time Limit : 2000/1000ms (Java/Other)   Memory Limit : 65536/32768K (Java/Other)
Total Submission(s) : 4   Accepted Submission(s) : 4
Font: Times New Roman | Verdana | Georgia
Font Size: ← →
Problem Description
Marsha and Bill own a collection of marbles. They want to split the collection among themselves so that both receive an equal share of the marbles. This would be easy if all the marbles had the same value, because then they could just split the collection in half. But unfortunately, some of the marbles are larger, or more beautiful than others. So, Marsha and Bill start by assigning a value, a natural number between one and six, to each marble. Now they want to divide the marbles so that each of them gets the same total value.
Unfortunately, they realize that it might be impossible to divide the marbles in this way (even if the total value of all marbles is even). For example, if there are one marble of value 1, one of value 3 and two of value 4, then they cannot be split into sets of equal value. So, they ask you to write a program that checks whether there is a fair partition of the marbles.
Input
Each line in the input describes one collection of marbles to be divided. The lines consist of six non-negative integers n1, n2, ..., n6, where ni is the number of marbles of value i. So, the example from above would be described by the input-line ``1 0 1 2 0 0''. The maximum total number of marbles will be 20000.

The last line of the input file will be ``0 0 0 0 0 0''; do not process this line.
Output
For each colletcion, output ``Collection #k:'', where k is the number of the test case, and then either ``Can be divided.'' or ``Can't be divided.''.

Output a blank line after each test case.
Sample Input
1 0 1 2 0 0
1 0 0 0 1 1
0 0 0 0 0 0
Sample Output
Collection #1:
Can't be divided.

Collection #2:
Can be divided.

*/
#include<iostream>
#include<algorithm>
#include<cstring>
#define N -1e13;
int a[20000];
int dp[60010];
using namespace std;
int main() {
	int i, j,n,sum,cnt,c,num[7];
	c = 1;
	while (1) {
		sum = 0;
		cnt = 0;
		/*dp[0] = 0;
		for (i = 1; i < 60010; i++) {
			dp[i] = N;
		}*/
		memset(dp, 0, sizeof(dp));
		for (i = 1; i <= 6; i++) {
			cin >> num[i];
			sum += num[i] * i;
		}
		if (sum == 0)
			break;
		for(i=1;i<=6;i++){			
			for (j = 1; j <= num[i]; j <<= 1) {  //将数量转化Wie二进制，为什么化为二进制可以做到优化①
				a[cnt++] = j * i;    //对应价值等于系数乘以价值i
				num[i] -= j;       //数量减去系数
			}
			if (num[i] > 0)    //如果不能刚好分完则价值等于剩余价值乘以i
				a[cnt++] = num[i] * i;
		}		
		if (sum & 1) {
			cout << "Collection #" << c++ << ":\nCan't be divided." << "\n\n";				
		}
		else {			
				for (i = 0; i < cnt; i++) {
					for (j = sum / 2; j >=a[i]; j--) {
							dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
					}
				}
				if (dp[sum / 2] == sum / 2) {
					cout << "Collection #" << c++ << ":\nCan be divided." << "\n\n";
				}
				else {
					cout << "Collection #" << c++ << ":\nCan't be divided." << "\n\n";
				}
		}
	}
	return 0;
}
/*
#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX 20000+10
using namespace std;
int val[MAX];
int dp[60000 + 10];
int main()
{
	int num[7];
	int sum;
	int i, j, k;
	int p = 1;
	while (scanf("%d%d%d%d%d%d", &num[1], &num[2], &num[3], &num[4], &num[5], &num[6]) != EOF) {
		if (num[1] == 0 && num[2] == 0 && num[3] == 0 && num[4] == 0 && num[5] == 0 && num[6] == 0)
			return 0;
		k = 0;  //k现在代表重新分得的物品的数量
		sum = 0;
		for (i = 1; i <= 6; i++) {
			sum += num[i] * i;   //统计总价值
			for (j = 1; j <= num[i]; j <<= 1) {  //将数量转化Wie二进制，为什么化为二进制可以做到优化①
				val[k++] = j * i;    //对应价值等于系数乘以价值i
				num[i] -= j;       //数量减去系数
			}
			if (num[i] > 0)    //如果不能刚好分完则价值等于剩余价值乘以i
				val[k++] = num[i] * i;
		}
		if (sum & 1) {    //相当于sum%2==1  总价值为奇数不能平分
			printf("Collection #%d:\n", p++);
			printf("Can't be divided.\n\n");
			continue;
		}
		memset(dp, 0, sizeof(dp));
		sum /= 2;             //总价值减半，对其中一个人来说用01背包，背包总容量为sum/2
		for (i = 0; i < k; i++) {
			for (j = sum; j >= val[i]; j--) {
				dp[j] = max(dp[j], dp[j - val[i]] + val[i]);
			}
		}
		printf("Collection #%d:\n", p++);
		if (dp[sum] == sum)          //等于背包总容量则另一个人也一样即能平分
			printf("Can be divided.\n\n");
		else
			printf("Can't be divided.\n\n");
	}
	return 0;
}*/
