#include<iostream>
using namespace std;
int mx,mi; 
string s1,s2;
void cal(string t,int a){
	int i;
	for(i=0;i<t.length();i++){
		if(t[i]<'0'||t[i]>'9')
			break;		
	}
	if(i!=t.length()){
		for(i=0;i<t.length();i++){
			if(t[i]=='d'){
				for(j=0;j<i;j++){
					if(t[j]<'0'||t[j]>'9'){
						break;
					}
				}
				for(k=i+1;k<t.length();k++){
					if(t[k]<'0'||t[k]>'9'){
						break;
					}
				}
				mi=atoi(t.substr(j+1,i-j-1).c_str());
				mx=atoi(t.substr(j+1,i-j-1).c_str())*atoi(t.substr(i+1,k-i-1).c_str());
				t.erase(j+1,k-1);
				t.insert(j+1,'0');
				cal(t);
				break;
			}
			if(t[i]=='*'){
				for(j=0;j<i;j++){
					if(t[j]<'0'||t[j]>'9'){
						break;
					}
				}
				for(k=i+1;k<t.length();k++){
					if(t[k]<'0'||t[k]>'9'){
						break;
					}
				}
				mi=atoi(t.substr(j+1,i-j-1).c_str());
				mx=atoi(t.substr(j+1,i-j-1).c_str())*atoi(t.substr(i+1,k-i-1).c_str());
				t.erase(j+1,k-1);
				t.insert(j+1,'0');
				cal(t);
				break;
			}
		}
	}
	s1.insert(a,to_string(mi));
	s2.insert(a,to_string(mx));
}
void ans(){
	int i;
	string t;
	for(i=0;i<s1.length();i++){
		if(s1[i]=='('){
			for(j=i+1;j<s1.length();j++){
				if(s1[j]==')'){
					t=s.substr(i+1,j-i-1);
				}
			}			
			ans(t,i);	
		}
	}
	if(t=="")
		cal(t,i);
}
int main()
{
	string t;
	int i,j;
	while(getline(cin,s))
	{	
		s1=s2=s;	
		ans();
		cal(s1);
		cal(s2);
		cout<<atoi(s1.c_str())<<" "<<atoi(s2.c_str())<<endl;
	}
	return 0;
}

