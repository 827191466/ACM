
/*int c;
int k;
void judge(int left,int right)
{

	int mid=(left+right)/2;
	cout<<left<<endl;
	cout<<right<<endl;
	if(right-left==1){
		if(abs(x[right]-x[left])<=k)
			c++;	 
	}
	else{
		if(abs(x[mid+1]-x[mid])<=k)
			c++;
		cout<<left<<right<<endl;
		judge(mid+1,right);	
		judge(left,mid);	
	}	
} 
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int x[100000];
int main()
{
	int t,n,c,k,l,r,mid,i;
	cin>>t;
	while(t--){
		cin>>n>>k;
		c=0;
		for(i=0;i<n;i++)
			cin>>x[i];
		sort(x,x+n);
		
		for(i=0;i<n;i++){
			l=i+1;r=n-1;
			 while(l<=r)  
	         {  
	                mid=(l+r)/2;  
	                if(x[mid]-x[i]>k)    
						r=mid-1;  
	                else 
						l=mid+1;	
	         }  
				 c=c+r-i;     
		}
		cout<<c<<endl;
	}	
	return 0;
}*/

#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
 
int main()
{
	long long int i,j,k,l,r,n,t,m,mid;
	long long int a[100005];
	scanf("%d",&t);
	while(t--)
	{
		long long int ans=0;
		scanf("%I64d%I64d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%I64d",&a[i]);
		}
		sort(a,a+n);
		r=1;
		for(i=0;i<n;i++)
		{
			l=i+1;
			r=n-1;
			while(l<=r)
			{
				mid=(l+r)/2;
				if(a[mid]-a[i]>k)	r=mid-1;
				else l=mid+1;
			}
 
			ans=ans+r-i;
			
		}
		printf("%I64d\n",ans);
	}
} 

