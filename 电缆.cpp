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
        while(fabs(l-r)>st)//�ҵ����ĳ��� 
        {
            mid=(l+r)/2;
            if(f(mid) >= k)//�Ƚϰ������������ƽ�ּ��� 
                l=mid;
            else
                r=mid;
        }
        printf("%.2f\n",l);
    }
}
