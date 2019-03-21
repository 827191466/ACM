#include<iostream>
#include<cstring> 
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
	string s;
	int t,i,c1,c2,j,f;
	char op[1000];
	int a[1000];		
	while(getline(cin,s))
	{	
		if(s=="0")
				break; 
		c1=0;
		c2=0;
		j=0;
		for(i=0;i<s.length();i++)	{
			if(s[i-1]==' '&&s[i+1]==' '){
				op[c1]=s[i];
				a[c2]=atoi(s.substr(j,i-1-j).c_str());
				j=i+2;
				c2++;
				c1++;
			}
		}
		a[c2]=atoi(s.substr(j,s.length()-j).c_str());
		c2++;
		f=1;
		double q=a[0],p=0;
		for(i=0;i<c1;i++){
			switch(op[i]){
				case '+':
					p+=q*f;
					f=1;
				    q=a[i+1];
					break;
				case '-':
					p+=q*f;
					f=-1;
					q=a[i+1];
					break;
				case '*':
					q=q*a[i+1];
					break;
				case '/':
					q/=a[i+1];
					break; 
				}
		}
		cout<<fixed<<setprecision(2)<<p+q*f<<endl;
	}
	return 0;
}

