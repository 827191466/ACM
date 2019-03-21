/*
�������
Time Limit : 1000 / 1000ms(Java / Other)   Memory Limit : 32768 / 32768K(Java / Other)
Total Submission(s) : 23   Accepted Submission(s) : 12
Font : Times New Roman | Verdana | Georgia
	Problem Description
	����һ�ʾ��ѿ��Ա���һ����ȵķ�Ʊ���������ķ�Ʊ���Ͱ�����ͼ�飨A�ࣩ���ľߣ�B�ࣩ�����ã�C�ࣩ��Ҫ��ÿ�ŷ�Ʊ���ܶ�ó���1000Ԫ��ÿ�ŷ�Ʊ�ϣ�������Ʒ�ļ�ֵ���ó���600Ԫ���������д�����ڸ�����һ�ѷ�Ʊ���ҳ����Ա����ġ�������������ȵ�������
	Input
	��������������ɲ���������ÿ�����������ĵ�1�а����������� Q �� N������ Q �Ǹ����ı�����ȣ�N�� <= 30���Ƿ�Ʊ����������� N �����룬ÿ�еĸ�ʽΪ��
	m Type_1 : price_1 Type_2 : price_2 ... Type_m : price_m
	���������� m �����ŷ�Ʊ��������Ʒ�ļ�����Type_i �� price_i �ǵ� i ����Ʒ������ͼ�ֵ����Ʒ������һ����дӢ����ĸ��ʾ����NΪ0ʱ��ȫ�������������Ӧ�Ľ����Ҫ�����
	Output
	��ÿ�������������1�У������Ա�������������ȷ��С�����2λ��
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
