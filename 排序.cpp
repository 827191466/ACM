//输入一行数字，如果我们把这行数字中的‘5’都看成空格，那么就得到一行用空格分割的若干非负整数（可能有些整数以‘0’开头，这些头部的‘0’应该被忽略掉，除非这个整数就是由若干个‘0’组成的，这时这个整数就是0）。
//你的任务是：对这些分割得到的整数，依从小到大的顺序排序输出 
#include<iostream>
#include<cstring>
#include <stdlib.h>
using namespace std;
int main()
{
	char n[10000];
	int i,j;
	while(cin>>n)
	{
		int s[1000];
		int count=0;
		const char *d ="5";
        char *p;
        p = strtok(n,d);
       	while(p != NULL)
       	{
		 	s[count]=atoi(p);
			count++;
	        p=strtok(NULL, d);		
       	}
		for(i=0;i<count-1;i++)
		{
			for(j=0;j<count-1-i;j++)
			{
				if(s[j+1]<s[j])
				{
					int m=s[j];
					s[j]=s[j+1];
					s[j+1]=m;
				}
			}
		}
		for(i=0;i<count;i++)
		{
			cout<<s[i];
			if(i<count-1)
				cout<<" ";
			else
				cout<<endl;
		} 	
	}
	return 0;
}
