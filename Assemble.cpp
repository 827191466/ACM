#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<cmath>
#include<cstdlib>
#define mem(a,x) memset(a,x,sizeof(a))
using namespace std;
typedef long long ll;
const int N = 1000;
const int inf = 1e9+9;
int n,b;
struct node    
{
    char type[30];
    char name[30];
    int p,q;
}a[N+5];
bool cmp(node a,node b)
{
    if (strcmp(a.type,b.type) == 0)
    {
        if (a.q == b.q) return a.p < b.p;
        return a.q>b.q;
    }
    return strcmp(a.type,b.type)<0;
}
int ol[N+5];
struct Node
{
    int p,q;
};
vector<Node>u[N+5];
int k;
bool ok(int mid) 
{
    ll sun = 0;
    for (int i = 0;i < k;++i)
    {
        int mn = inf;
        for (int j = 0;j < u[i].size();++j)
        {
            if (u[i][j].q>=mid) mn = min(mn,u[i][j].p);
            else break;
        }
        sun += mn;
        if (sun > b) return 0;
    }
    return 1;
}
int main()
{
    int T;scanf("%d",&T);
    while (T--)
    {
        scanf("%d %d",&n,&b);
        for (int i = 0;i < n;++i)
        {
            u[i].clear();
            scanf("%s %s %d %d",a[i].type,a[i].name,&a[i].p,&a[i].q);
            ol[i] = a[i].q;
        }
        sort(ol,ol+n);
        sort(a,a+n,cmp);
        k = 0;
        for (int i = 0;i+1 < n;++i)
        {
            while (i+1<n&&strcmp(a[i].type,a[i+1].type)==0)
            {
                Node tmp;tmp.p = a[i].p,tmp.q=a[i].q;
                u[k].push_back(tmp);
                i++;
            }
            Node tmp;tmp.p = a[i].p;tmp.q = a[i].q;
            u[k].push_back(tmp);
            k++;
        }
        int l = 0,r = n-1;
        int mid = (l+r)>>1;
        while (l <= r)
        {
            if (ok(ol[mid])) l = mid +1;
            else r = mid - 1;
            mid = (l+r)>>1;
        }
        printf("%d\n",ol[mid]);
    }
    return 0;
}


