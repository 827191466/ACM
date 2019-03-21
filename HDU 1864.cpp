/*
最大报销额
Time Limit : 1000 / 1000ms(Java / Other)   Memory Limit : 32768 / 32768K(Java / Other)
Total Submission(s) : 23   Accepted Submission(s) : 12
Font : Times New Roman | Verdana | Georgia
	Problem Description
	现有一笔经费可以报销一定额度的发票。允许报销的发票类型包括买图书（A类）、文具（B类）、差旅（C类），要求每张发票的总额不得超过1000元，每张发票上，单项物品的价值不得超过600元。现请你编写程序，在给出的一堆发票中找出可以报销的、不超过给定额度的最大报销额。
	Input
	测试输入包含若干测试用例。每个测试用例的第1行包含两个正数 Q 和 N，其中 Q 是给定的报销额度，N（ <= 30）是发票张数。随后是 N 行输入，每行的格式为：
	m Type_1 : price_1 Type_2 : price_2 ... Type_m : price_m
	其中正整数 m 是这张发票上所开物品的件数，Type_i 和 price_i 是第 i 项物品的种类和价值。物品种类用一个大写英文字母表示。当N为0时，全部输入结束，相应的结果不要输出。
	Output
	对每个测试用例输出1行，即可以报销的最大数额，精确到小数点后2位。
	Sample Input
	200.00 3
	2 A:23.50 B : 100.00
	1 C : 650.00
	3 A : 59.99 A : 120.00 X : 10.00
	1200.00 2
	2 B : 600.00 A : 400.00
	1 C : 200.50
	1200.50 3
	2 B : 600.00 A : 400.00
	1 C : 200.50
	1 A : 100.00
	100.00 0
	Sample Output
	123.50
	1000.00
	1200.50
	*/
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int f[3001000];
int main()
{
	int N, i, j, t, m;
	int flag;
	double Q;
	int q;
	int sum[30];
	while (scanf("%lf%d", &Q, &N) != EOF)
	{
		q = (int)(Q * 100);
		t = 1;
		memset(sum, 0, sizeof(sum));
		memset(f, 0, sizeof(f));
		if (N == 0)
			break;
		while (N--)
		{
			int a, b, c;
			a = b = c = 0;
			flag = 1;
			scanf("%d", &m);
			for (i = 1; i <= m; i++)
			{
				char str[100];
				char type;
				double price;
				int pri;
				scanf("%s", str);
				sscanf(str, "%c:%lf", &type, &price);
				pri = (int)(price * 100);
				if (type == 'A')
				{
					a += pri;
				}
				else if (type == 'B')
				{
					b += pri;
				}
				else if (type == 'C')
				{
					c += pri;
				}
				else
				{
					flag = 0;
				}
				if (a + b + c > 100000 || a > 60000 || b > 60000 || c > 60000)
				{
					flag = 0;
				}
			}
			if (flag)
			{
				sum[t++] = a + b + c;
			}
		}
		for (i = 1; i < t; i++)
		{
			for (j = q; j >= 1; j--)
			{
				if (sum[i] <= j)
					f[j] = max(f[j], f[j -sum[i]] +sum[i]);
			}
		}
		printf("%.2lf\n", f[q] / 100.00);
	}
	return 0;
}
