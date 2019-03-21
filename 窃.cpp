#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath> 
#include<map>
using namespace std;
long long n;
int flag;
char str[100000];
char ans[5];
map<char,int>k;
int vis[27];
bool cmp(char a,char b){
	return a>b;
}
int cal(int v,int w,int x,int y,int z){
	return v-w*w+x*x*x-y*y*y*y+z*z*z*z*z;
}
void dfs(int dep){
	int i;
	if(flag)
	 return;
	if(dep>4){
		if(cal(k[ans[0]],k[ans[1]],k[ans[2]],k[ans[3]],k[ans[4]])==n)
		{
			flag=1;
			for(i=0;i<5;i++)
				cout<<ans[i];
				
			cout<<endl;
		}	
		return;
	}
	for(i=0;i<strlen(str);i++)
	{
		if(!vis[k[str[i]]]){
			vis[k[str[i]]]=1;
			ans[dep]=str[i];			
			dfs(dep+1);
			vis[k[str[i]]]=0;
		}			
	}
}
int main()
{
	int i;
	for(char a='A';a<='Z';a++){
		k[a]=a-64;
	}
	while(cin>>n>>str){
		for(i=0;i<27;i++)
			vis[i]=0;
		flag=0;
		if(n==0&&strcmp(str,"END")==0)
			break;
		sort(str,str+strlen(str),cmp);
		dfs(0);
		if(!flag)
			cout<<"no solution"<<endl;
	}
	return 0;
}

