#include<cstring>
#include <iostream>
using namespace std; 
int main()
{
    char  num[1000];
    int len,sum,i;
    while(cin>>num)
    {
        len=strlen(num);
        if(len==1 && num[0]=='0') return 0;
        for(sum=0,i=0;i<len;i++)
        {
            sum=sum+num[i]-'0';
        }
        cout<<(sum%9?sum%9:9)<<endl;  
    }
    return 0;
}
