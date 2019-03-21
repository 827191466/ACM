//嘿，欢迎来到HDOJ（杭州电子科技大学在线评委）。

//在这个问题中，你的任务是计算SUM（n）= 1 + 2 + 3 + ... + n。
#include<iostream>
using namespace std;
int main()
{
	long long int n;
	while(cin>>n){
		cout<<n*(n+1)/2<<"\n\n";
	} 
	return 0;
}

