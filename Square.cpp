#include<iostream>
#include<cstring>
using namespace  std;
 
int a[20+10];
bool used[20+10];
int n,m,sum;
 
int dfs(int d, int w, int count)
{
	if(d == sum)
	{
		w = 0;
		d = 0;
		count++;
		if(count == 4)
			return 1;
	}
 
	for(int i=w; i<m; i++)
	{
		if(!used[i])
		{
			used[i] = 1;
			if((d+a[i] <= sum ) && dfs(d+a[i], i+1, count))
				return 1;
			used[i] = 0;
		}
	}
	return 0;
}
 
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>m;
		sum = 0;
		memset(used, 0, sizeof(used));
		for(int i=0; i<m; i++)
		{
			cin>>a[i];
			sum += a[i];
		}
		int flag = 0;
		if(sum % 4 ==0)
		{
			sum /= 4;
			flag = dfs(0, 0, 0);
		}
 
		if(flag)
		{
			cout<<"yes"<<endl;
		}
		else 
		{
			cout<<"no"<<endl;
		}
	}
}


