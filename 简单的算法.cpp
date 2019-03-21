#include<iostream>
#include<cstring> 
#include<cstdlib>
using namespace std;
string cal1(string a,int b)
{
	string c;
	int t,s;
	s=0;
	for(int i=0;i<a.length();i++){
		t=a[i]-'0';
		c+=(t*b+s)%10+'0';
		if(i==a.length()-1&&t*b+s>=10)
			c+=(t*b+s)/10+'0'; 
		s=(t*b+s)/10;
	}
	return c;
}
string cal2(string a,string b){
	
}

int main()
{
	int t,i,flag;
	string s,a,b;
	char op;
	cin>>t;
	while(t--){
		getline(cin,s);
		for(i=0;i<s.length();i++){
			if(s[i-1]==' '&&s[i+1]==' '){
				flag=i;		
				break;		
			}
		}
		a=s.substr(0,i-1);
		b=s.substr(i+2,s.length()-i-2);
		op=s[i];
	} 
	return 0;
}

