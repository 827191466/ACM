#include<iostream>
#include<algorithm>
#include <cstdio> 
using namespace std;
int judge(int *t,int mid,int n)
{
    int sum=0;
    int i=1,j=0;
    while(i<n){  	
        if(t[i]-t[j]>mid){
            j=i-1;
            sum++;
            continue; 
        }
        if(t[i]-t[j]==mid){
            j=i;
            i++;
            sum++;
            continue;
        }
        if(i==n-1)
		{
			sum++;
		}                                    
        i++;            
    }
    return sum;
}
int main()
{
    int l,n,m,i,le,ri,mid;
    while(scanf("%d%d%d",&l,&n,&m)){
        int *to=new int[n+2];
        for(i=1;i<n+1;i++)
            scanf("%d",&to[i]);
        to[0]=0;
        to[n+1]=l;       
		le=0;
        sort(to,to+n+1);    
        for(i=0;i<n+1;i++)
        {
            le=max(le,to[i+1]-to[i]);
        }	 
        ri=l;        
        while(le<ri){
            mid=(le+ri)/2;
            //cout<<le<<" "<<ri<<endl;
            //cout<<judge(to,mid,n+2)<<endl;
            if(judge(to,mid,n+2)>m)
                le=mid+1;                
            else
                ri=mid;                                        
        }
        printf("%d\n",le);
        delete []to;
    } 
    return 0;
}


/*#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;    
int L,n,m;
int  s[500001];
int cha(int mid)
{
       int cut=0;
       int last=0;
    for(int i=1;i<=n+1;)
    {
         if(last+mid>=s[i])
         {
            i++;
         }
         else
         {
             if(last==s[i-1])
             {
                     return false;
             }
             last=s[i-1];
             cut++;
         }
    }
    cut++;
      return cut<=m;
}
int main()
{
    while(scanf("%d%d%d",&L,&n,&m)!=EOF)
    {
          for( int i=1;i<=n;i++)
          {
              scanf("%d",&s[i]);
          } 
          sort(s+1,s+n+1);
         s[n+1]=L;
         int  l=0,r=L;
         int ans;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(cha(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}*/

