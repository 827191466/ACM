#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
#include<algorithm>
#define pi  acos(-1.0)
#define st 1e-8
using namespace std;
int find(int *a, double b,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i]*a[i]/b;
	}
	return sum;
}
int main()
{
	int t,n,f,i;
	double ave,mid,l,r,sum;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&f);
		int *ri=new int[n];
		sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&ri[i]);
			//sum=sum+ri[i]*ri[i];
		}
		//ave=sum/f;
		sort(ri,ri+n);
		l=0;
		r=ri[n-1]*ri[n-1];
		while(fabs(r-l)>st){
			mid=(l+r)/2;
			if(find(ri,mid,n)>=f+1)//还有一个人 
				l=mid;
			else
				r=mid;
		}
		printf("%.4f\n",l*pi);
		delete []ri;
	} 
	return 0;
}

