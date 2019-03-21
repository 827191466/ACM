#include<iostream>
using namespace std;
int a[10],count,flag,m,re,le;
void dfs(int dep){
	if(dep==m){
		flag=1;
		return;
	}
	for(int i=0;i<count;i++){
		if(flag)
			return;
		if(dep%2!=0){
			if(le+a[i]>re){			
				le+=a[i];
				dfs(dep+1);
				le-=a[i];
			}
			continue;
		}
		if(dep%2==0){
			if(re+a[i]>le){				
				re+=a[i];
				dfs(dep+1);
				re-=a[i];
			}
			continue;
		}
	}
} 
int main()
{
	int t;
	char str[11];
	int i;
	cin>>t;
	while(t--){
		cin>>str;
		count=0;
		flag=0;
		re=0;
		le=0;
		for(i=0;i<10;i++){
			if(str[i]=='1')
			{
				a[count]=i+1;
				count++;	
			}
		}
		cin>>m;
		dfs(0);
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;		
	}	
	return 0;
}

