#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int ok;
int f[100005];
int vis[100005];
int find(int a)
{
    int r=a;
    while(f[r]!=r)
    r=f[r];
    int i=a;
    int j;
    while(i!=r)
    {
        j=f[i];
        f[i]=r;
        i=j;
    }
    return r;
}
void merge(int a,int b)
{
    int A,B;
    A=find(a);
    B=find(b);
    if(A!=B)
    {
        f[B]=A;
    }
    else
    {
        ok=0;
    }
}
int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        if(a==0&&b==0)
        {
            printf("Yes\n");
            continue;
        }
        for(int i=0;i<100005;i++)
        {
            f[i]=i;vis[i]=0;
        }
        if(a==-1&&b==-1)break;
        merge(a,b);
        ok=1;
        vis[a]=1;
        vis[b]=1;
        while(scanf("%d%d",&a,&b)&&a&&b)
        {
            merge(a,b);
            vis[a]=1;
            vis[b]=1;
        }
        if(ok==0)
        {
            printf("No\n");
            continue;
        }
        else
        {
            int cont=0;
            for(int i=0;i<=100005;i++)
            {
                if(vis[i]&&f[i]==i)
                cont++;
            }
            if(cont==1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
}


