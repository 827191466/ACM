#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,n,i,j,max,sum;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int *a=new int[n+1];
		int *b=new int[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		a[n]=0;
		for(i=0;i<n;i++){
			max=0;
			sum=0;
			a[b[i]-1]=0;			
			for(j=0;j<=n;j++){
				if(a[j]==0)
				{
					if(sum>max)
						max=sum;
					sum=0;
					continue;
				}				
				sum+=a[j];
			}
			printf("%d\n",max);
		}
		delete[]a;
		delete[]b;
	}
	return 0;
}

