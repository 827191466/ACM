//����һ�����֣�������ǰ����������еġ�5�������ɿո���ô�͵õ�һ���ÿո�ָ�����ɷǸ�������������Щ�����ԡ�0����ͷ����Щͷ���ġ�0��Ӧ�ñ����Ե�����������������������ɸ���0����ɵģ���ʱ�����������0����
//��������ǣ�����Щ�ָ�õ�������������С�����˳��������� 
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
