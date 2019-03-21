#include<iostream>
using namespace std;
int main()
{
    long long int a[51];
    int i,n;
    a[1]=1;
    a[2]=2;
    for(i=3;i<=50;i++)
        a[i]=a[i-1]+a[i-2];
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}
