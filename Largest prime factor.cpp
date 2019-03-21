#include<cstdio>
using namespace std;
#define N 1000000
int flag[N];
int main()
{
	int i,j,count=1,n;
	flag[1]=0; 
	for(i=2;i<N;i++){
		if(!flag[i]){	
			for(j=i;j<N;j+=i)
				flag[j]=count;
			count++;
		}
	}
	while(scanf("%d",&n))
		printf("%d\n",flag[n]);	
	return 0;
}
#include<cstdio>
using namespace std;
#define N 1000000
int a[N];
int main()
{
	int n;
	a[1]=0;
	int count = 0;
	for(int i = 2; i <N; i++)
	{
		if(!a[i])
		{
			count++;
			for(int j = i; j < N; j += i)
			a[j] = count;
		}
	}
	while(scanf("%d", &n) != EOF)
	{
		printf("%d\n", a[n]);
	}
	return 0;
}
