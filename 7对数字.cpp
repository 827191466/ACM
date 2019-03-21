#include<iostream>
using namespace std;
int x[14]; 
int f[8];
int cnt=4;
void dfs(int dep){
	int i;
	if(cnt==12)
	{
		for(i=0;i<14;i++)
			cout<<x[i];
		cout<<endl;
		return;
	}
	for(i=1;i<8;i++){
		if(!x[dep]&&!f[i])
		{
			if(!x[dep+i+1]){
				x[dep]=i;
				x[dep+i+1]=i;
				f[i]=1;
				cnt+=2;
				dfs(dep+1);	
				f[i]=0;
				cnt-=2;				
				x[dep]=0;
				x[dep+i+1]=0;
			}
		}			
	}		
}
int main()
{
	for(int i=0;i<14;i++)
		x[i]=0;
	x[0]=7;
	x[1]=4;
	x[8]=7;
	x[6]=4;
	for(int j=1;j<8;j++)
		f[j]=0;
	f[4]=1;
	f[7]=1;
	dfs(2);
	return 0;
}

