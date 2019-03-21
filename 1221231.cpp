#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int n,m,i,j,k,s;
int main()
{
    int i,j,k,a,b;
    while(~scanf("%d%d",&n,&m))
    {
        s=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&a,&b);
            s^=abs(a-b)-1;
        }
        if(s==0)
          printf("BAD LUCK!\n");
        else
          printf("I WIN!\n");
    }
}

