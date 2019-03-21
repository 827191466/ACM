#include <iostream>
#define MAX 31
using namespace std;
long long s[MAX]={0};
int main()
{
	ios::sync_with_stdio(false);
	s[0]=1;
	s[2]=3;
	for(int i=4;i<MAX;i+=2)
	{
		s[i]=s[i-2]*4-s[i-4];
	} 
	int t;
	while(cin>>t)
	{
		if(t==-1)
		break;
		if(t%2==0)
		cout<<s[t]<<endl;
	}
	return 0;
}

#include <iostream>
#define MAX 31
using namespace std;
long long s[MAX]={0};
int main()
{
    ios::sync_with_stdio(false);
    s[0]=1;
    s[2]=3;
    for(int i=4;i<MAX;i+=2)
    {
        s[i]=s[i-2]*4-s[i-4];
    } 
    int t;
    while(cin>>t)
    {
        if(t==-1)
        break;
        cout<<s[t]<<endl;
    }
    return 0;
}
