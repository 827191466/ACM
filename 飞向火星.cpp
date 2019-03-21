#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,max;
	while(scanf("%d",&n)!=EOF){
		int *rank=new int[n];
		int count,c;
		for(i=0;i<n;i++)
			scanf("%d",&rank[i]);
		sort(rank,rank+n);
		count=1;
		max=1;
		for(i=0;i<n-1;i++)
		{
			if(rank[i+1]!=rank[i])
				count=1;
			else
				count++;
			if(count>max)
				max=count;
		}
		printf("%d\n",max);
		delete []rank;
	}
	return 0;
}

