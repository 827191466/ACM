#include<iostream>
#include<string>
using namespace std;
string scal(string n,int b)
{
	string c;
	int t,s;
	s=0;
	for(int i=0;i<n.length();i++){
		t=n[i]-'0';
		c+=(t*b+s)%10+'0';
		s=(t*b+s)/10;
		if(i==n.length()-1&&t*b+s>=10)
			c+=s+'0';		
	}
	return c;
}
string sum(string a,string b)
{
	string c;
	if(a.length()<b.length())
	{
		string t=a;
		a=b;
		b=t;
	}
	int row=0,m,n;
	for(int i=0;i<a.length();i++)
	{
		if(i<b.length()){
			c+=(a[i]-'0'+b[i]-'0'+row)%10;
			row=(a[i]-'0'+b[i]-'0'+row)/10;
			if(a.length()==b.length()&&i==b.length()-1){
				if(a[i]-'0'+b[i]-'0'+row>=10)
					c+=row; 
			}
		}
		else{
			c+=(a[i]-'0'+row)+'0';
			row=0;
		}
	}
	return c;
}
string cal(string a,int b)
{
	string t,s;
	s='0';
	int count=0;
	while(b){
		for(int i=0;i<count;i++){
			t+='0';
		}
		t+=scal(a,b%10);		
		s=sum(s,t);
		b/=10;
		count++;
	}
	return s;
}

int main()
{
	int n;
	string t,a[10001];;
	a[0]='0';
	a[1]='1';
	for(int i=2;i<10001;i++){
		a[i]=cal(a[i-1],i);
	}
	while(cin>>n){
		t=a[n];
		for(int i=t.length()-1;i>=0;i--)		
			cout<<t[i];
		cout<<endl;
	}
	return 0;
}

