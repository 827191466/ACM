#include<iostream>
#include<cstdio>
#include<cmath>
#define N 100005
using namespace std;
int pre[N];
int flag[N];
int find(int x)
{
    if(parent[x]==0)
        return x;
    else return parent[x]=root(parent[x]);   
}

void join(int x,int y)
{
    int a=find(x);//x�ĸ��ڵ�Ϊa
    int b=find(y);//y�ĸ��ڵ�Ϊb
    if(a!=b)//���a,b������ͬ�ĸ��ڵ㣬��˵��ab������ͨ��
    {
        pre[a]=b;//���ǽ�ab���� ��a��ǰ���������Ϊb
    }
}

int findmx(int *a,int n){
	int sum,mx;
	mx=0;
	for(int i=0;i<n;i++){
		sum=0;
		if(flag[i]){
			while(pre[i]!=0) 
			{
				sum+=a[i];
				i=pre[i];
				cout<<i<<pre[i]<<endl;
			}				
			if(sum>mx)
				mx=sum;
		}
	}
	return mx;
}
int main()
{
	int t,n,i,j,f;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			flag[i]=0;		
		int *a=new int[n];
		int *b=new int[n];
		int *ans=new int[n];		
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			pre[i]=0;
		}
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		pre[b[n-1]-1]=b[n-1]-1;
		flag[b[n-1]-1]=1;
		ans[n-1]=0;
		ans[n-2]=a[b[n-1]-1];
		for(i=n-2;i>0;i--){
			f=0;
			flag[b[i]-1]=1;
			for(j=i+1;j<n;j++){
				if(abs(b[i]-b[j])==1)
				{
					join(b[i]-1,b[j]-1);
					f=1;
				}				
			}	
			if(!f)
				pre[b[i]-1]=b[i]-1;	
			ans[i-1]=findmx(a,n);				
		}
		//for(i=0;i<n;i++)
		//cout<<ans[i]<<endl;
		delete[]a;
		delete[]b;
		delete[]ans;
	}
	return 0;
}


