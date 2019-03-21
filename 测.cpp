#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,m,d[555555];
int cc(int mid)
{
    int i,j,k,l;
    for(i=1,k=l=0;i<n+2;i++)
    {
        l+=d[i]-d[i-1];
        if(l>mid)l=d[i]-d[i-1],k++;	
    }
    return l>mid?1<<30:k+1;
}
int main (void)
{
    int l,i,j,k,mid,x,s;
    while(~scanf("%d%d%d",&l,&n,&m))
    {
        for(i=1;i<=n;i++)
        scanf("%d",d+i);
        d[n+1]=l;	
        d[0]=0;	
        sort(d+1,d+n+1);	
        for(i=1,j=0;i<n+2;i++)
        j=max(j,d[i]-d[i-1]);
        i=j;j=l;
        while(i<j)
        {
        
            mid=(i+j)/2;
			cout<<i<<" "<<j<<endl;
			cout<<cc(mid)<<endl;
            if(cc(mid)<=m)j=mid;
            else i=mid+1;
        }
        printf("%d\n",i);
    }
    return 0;
}

