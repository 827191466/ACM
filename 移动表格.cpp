#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[201];
    int t,n,i,j;
   	cin>>t;
    while(t--)
    {   
		for(i=0;i<201;i++)
			a[i]=0;	
        int start,finish;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>start>>finish;
            if(start>finish)
            {
                swap(start,finish);
            }
            start = (start+1)/2;
            finish = (finish+1)/2;
            for(j=start;j<=finish;j++)
            {
                a[j]++;
            }
        }
        int MAX = 0;
        for(i=0;i<201;i++)
        {
            if(a[i]>MAX)
            {
                MAX=a[i];
            }
        }
        cout<<MAX*10<<endl;
    }
    return 0;
}

