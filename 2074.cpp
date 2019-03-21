#include<iostream>
using namespace std;
int  main(){
    int n,t=0;
    char a[85][85],b,c;
    while(cin>>n>>b>>c){
        if(t++)
            cout<<endl;
        if(n/2%2==0)
            swap(b,c);
        for(int k=0; k<n; k++)
            for(int i=k; i<n-k; i++)
                for(int j=k; j<n-k; j++){
                    if(k%2)
                        a[i][j]=b;
                    else
                        a[i][j]=c;
                }
        if(n!=1)
            a[0][n-1]=a[0][0]=a[n-1][0]=a[n-1][n-1]=' ';
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout<<a[i][j];
            cout<<endl;
        }
    }
    return 0;
}
