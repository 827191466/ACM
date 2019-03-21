#include<iostream>
#include<algorithm>
using namespace std;
struct cha{
	int dv;
	int be;
	int en;
};
int main()
{
	int i,j,a,count,c,t,n,cha;
	cin>>t;
	while(t--){		
		cin>>n;
		int *a=new int[n];
		cha *b=new cha[n-1];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		c=0;
		i=0;
		count=0;
		while(i<n-1)
		{
			if(a[i]==-1)
			{
				i++;
				continue;
			}				
			for(j=i+1;j<n;j++){
				if(a[j]==-1)
					continue;
				b[c].dv=a[j]-a[i];
				b[c].be=i;
				b[c].en=j;	
				c++;
				break;					
			}
			i=j;			
		}
		if(c==0)
			cout<<1<<endl;
		else{
			for(i=0;i<c-1;i++){
				cha=b[i].en-b[i].be;
				if(b[i])
				if(b[i].dv%cha==0)
			}
				
		}	
		delete[]a;
		delete[]b;			
	}
	return 0;
}

