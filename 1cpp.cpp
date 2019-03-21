#include<cstdio>
#include<cstring>
char a[110], b[110];
int dp[110][110], lena, lenb, mark[110][110];
void LCS()
{
	int i, j;
	memset(dp, 0, sizeof(dp));
	for (i = 0; i < lena; ++i)
		mark[i][0] = 1;
	for (i = 0; i < lenb; ++i)
		mark[0][i] = -1;
	for (i = 1; i <= lena; ++i)
	{
		for (j = 1; j <= lenb; ++j)
		{
			if (a[i - 1] == b[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
				mark[i][j] = 0;
			}
			else if (dp[i - 1][j] >= dp[i][j - 1])
			{
				dp[i][j] = dp[i - 1][j];
				mark[i][j] = 1;
			}
			else
			{
				dp[i][j] = dp[i][j - 1];
				mark[i][j] = -1;
			}
		}
	}
}

void out(int x, int y)
{
	if (!x && !y)
		return;
	else if (mark[x][y] == 0)
	{
		out(x - 1, y - 1);
		printf("%c", a[x - 1]);
	}
	else if (mark[x][y] == 1)
	{
		out(x - 1, y);
		printf("%c", a[x - 1]);
	}
	else if (mark[x][y] == -1)
	{
		out(x, y - 1);
		printf("%c", b[y - 1]);
	}
}

int main()
{
	while (scanf_s("%s%s", &a,110,&b,110) != EOF)
	{
		lena = strlen(a);
		lenb = strlen(b);
		LCS();
		out(lena, lenb);
		printf("\n");
	}
	return 0;
}

