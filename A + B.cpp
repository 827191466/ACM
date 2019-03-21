#include<iostream>
#include<map> 
#include<cstring>
using namespace std;
int main()
{
	map <string,int>s;
	s["zero"]=0;
	s["one"]=1;
	s["two"]=2;
	s["three"]=3;
	s["four"]=4;
	s["five"]=5;
	s["six"]=6;
	s["seven"]=7;
	s["eight"]=8;
	s["nine"]=9;
	string str;
	int i;
	while(getline(cin,str))
	{
		int flag,f;
		int a,b;
		int c=1;
		for(i=0;i<str.size();i++)
		{
			if(str[i]=='+')
			{ 
				flag=i;
				break;
			}
		}
		for(i=0;i<flag-1;i++)
		{
			if(str[i]==' ')
			{
				c++;
				f=i;
				break;
			}
		}
		if(c==1)
		{
			string t=str.substr(0,flag-2);
			a=s[t];
		}
		else
		{
		    string t1=str.substr(0,f-1);
		    string t2=str.substr(f+1,flag-2);
			a=s[t1]*10+s[t2];
		}
		c=1;
		for(i=flag+2;i<str.size();i++)
		{
			if(str[i]==' ')
			{
				c++;
				f=i;
				break;
			}
		}
		if(c==1)
		{
			string t=str.substr(flag+2,str.size()-1);
			b=s[t];
		}
		else
		{
		    string t1=str.substr(flag+2,f-1);
		    string t2=str.substr(f+1,str.size()-1);
			b=s[t1]*10+s[t2];
		}
		if(a==0&&b==0)
			break;
		else
			cout<<a+b<<endl;
			
	}
	return 0;
}
