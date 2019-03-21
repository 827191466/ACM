#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct card{
	int h;
	int w;
};
int cmp1(card m,card n)
{
	if(m.h!=n.h)
		return m.h<n.h;
	else
		return m.w<n.w;
}
int cmp2(card m,card n)
{
	if(m.h!=n.h)
		return m.h<n.h;
	else
		return m.w>n.w;
}
int main()
{
	int t,n,i,j,k,count;
	cin>>t;
	while(t--){
        scanf("%d",&n);
		card *a=new card[n];
		card *b=new card[n];
		int *flag=new int[n];
		for(i=0;i<n;i++)
			scanf("%d%d",&a[i].h,&a[i].w);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&b[i].h,&b[i].w);
			flag[i]=0;
		}			
		sort(a,a+n,cmp1);
		sort(b,b+n,cmp2);
		count=0;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(a[i].h>=b[j].h&&a[i].w>=b[j].w&&!flag[j]){
					count++;
					flag[j]=1;
					break;			
				}
			}
		}	
		printf("%d\n",count);
		delete []a;
		delete []b;
	}
	return 0;
}

