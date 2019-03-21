#include<iostream>
#include<cstring>
using namespace std;
int n;
int vis[20];
bool isPrime(int x){
	int i;
	if((!(x&1)&&x!=2)||x==1)  
	return false;
	else if(x==2)
	return true;
	for(i=3;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}
void dfs(int *x,int dep){
	int i;
	if(dep==n){
		if(isPrime(x[n-1]+x[0]))
		{
			for(i=0;i<n;i++)
			{
				cout<<x[i];
				if(i==n-1)
					cout<<endl;
				else
					cout<<" ";
			}
				
		}
		return;
	}
	for(i=2;i<=n;i++){
		if(!vis[i]){				
			if(isPrime(i+x[dep-1])){
				vis[i]=1;
				x[dep]=i;
				dfs(x,dep+1);
				vis[i]=0;
				x[dep]=0;
			}
		}
	}
}
int main()
{
	int count=1;
 	while(cin>>n){
	 	for(int i=0;i<20;i++)
	 		vis[i]=0;
 		int *x=new int[n];
 		x[0]=1;
		cout<<"Case "<<count++<<":"<<endl;
 		dfs(x,1);		
 		cout<<endl;
 		delete []x;
 	}
	return 0;
}

