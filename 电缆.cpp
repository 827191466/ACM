#include<cstdio>
#include<math.h>
#define st 1e-8
double a[100010];
int k,n;
int f(double x)
{
    int su=0;
    for(int i = 0 ; i < n ; i++)
    {
        su+=(int)(a[i]/x); 
    }
    return su;
}
int main()
{
    double sum;
    while(scanf("%d%d",&n,&k) && (n+k))
    {
        sum=0;
        for(int i = 0 ; i < n ; i++)
        {
            scanf("%lf",&a[i]);
            sum+=a[i];
        }
        sum=sum/k;
        double l=0,r=sum,mid;
        while(fabs(l-r)>st)//找到最大的长度 
        {
            mid=(l+r)/2;
            if(f(mid) >= k)//比较按照这个剪裁能平分几个 
                l=mid;
            else
                r=mid;
        }
        printf("%.2f\n",l);
    }
}
