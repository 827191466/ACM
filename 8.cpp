#include<iostream>
#include<algorithm>
using namespace std;
struct wood{
	int l;
	int w;
	int flag;
};
int cmp(wood m,wood n)
{
	if(m.l!=n.l)
		return m.l<n.l;
	else
		return m.w<n.w; 
}
int main()
{
	int t,n,i,j,count,min;
	cin>>t;
	while(t--){
		cin>>n;
		wood *w=new wood[n];
		for(i=0;i<n;i++)
		{ 
			cin>>w[i].l>>w[i].w;
			w[i].flag=0; 
		} 
		sort(w,w+n,cmp);
		count=0;
		for(i=0;i<n;i++)
		{
			if(w[i].flag)
				continue;
			min=w[i].w; 
			for(j=i+1;j<n;j++)
			{
				if(w[j].w>=min&&!w[j].flag){
					min=w[j].w;
					w[j].flag=1;
				}
			}
			count++;
		}
		cout<<count<<endl;
		delete []w;
	}
	return 0;
}


/*#include<iostream>
#include<algorithm>
using namespace std; 
struct SIZE
{
	int l;
	int w;
}sticks[5005];
int flag[5005];
 bool cmp(const SIZE &a,const SIZE &b)
{
	if(a.l!=b.l)
		return a.l>b.l;
	else
		return a.w>b.w;
}
int main()
{
	int n,min,cases;
	int i,j,s; 
	cin>>cases; 
	for(j=0;j<cases;j++)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>sticks[i].l>>sticks[i].w;
			flag[i]=0;
		}
		sort(sticks,sticks+n,cmp);
		s=0;
		for(i=0;i<n;i++)
		{
			if(flag[i]) continue;
			min=sticks[i].w;
 
			for(int j=i+1;j<n;j++)
			{
				if(min>=sticks[j].w && !flag[j])
				{
					min=sticks[j].w;
					flag[j]=1;
				}
			}
			s++;
		}
		cout<<s<<endl;
	}
	return 0;
}*/
