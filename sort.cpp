#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n,m,i,j;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int *a=new int[n];
	    for(i=0;i<n;i++)
	    {
	    	scanf("%d",&a[i]);
	    }
	    sort(a,a+n,cmp);
		for(i=0;i<m;i++)
		{
			printf("%d",a[i]);
			if(i<m-1)
				printf(" ");
		}
		printf("\n");
		delete []a;
	}
	return 0;
}
	
