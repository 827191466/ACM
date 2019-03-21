#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int find(int l,int r,int n,int *s){
	int mid;	
	while(l<=r){
		mid=(l+r)/2;
		if(s[mid]>n){
			r=mid-1;
			continue;
		}
		if(s[mid]<n){
			l=mid+1;
			continue;
		}
		break;
	}
	return mid;
}
int main()
{
	int t,n,m,w,i,j,min,s1,s2,f,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n,&m,&w);
		int *a=new int[n];
		int *b=new int[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}			
			for(i=0;i<m;i++){
				for(j=0;j<n;j++)
				{
					b[j]=a[j];
				}
				sort(b,b+n);
				s2=n*n/2;
				f=0;	
				for(j=0;j<=n-w;j++){
					s1=0;	
					for(k=0;k<w;k++){
						s1+=find(0,n-1,a[j+k],b)*2;
					}
					if(s1<s2){
						s2=s1;
						f=j;
					}										
				}				
				for(j=f;j<f+w;j++){
					a[j]++;
				}
			}
			sort(a,a+n);
			printf("%d\n",a[0]);
			delete[]a;
			delete[]b;	
	}		
	return 0;
}

