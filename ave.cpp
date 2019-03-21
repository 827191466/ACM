#include<iostream>
#include<algorithm>
using namespace std;
struct cake{
	int c;
	int flag;
};
int main()
{
	int t,n,sum,i,j,ave,count,f,c,s;
	cin>>t;
	while(t--){
		cin>>n;
		cake *a=new cake[n];
		int *s1=new int[n];
		int *s2=new int[n];
		sum=0;
		for(i=0;i<n;i++){
			cin>>a[i].c;
			sum+=a[i].c;
			a[i].flag=0;
		}
		if(sum%n!=0)
			cout<<"NO"<<endl;
		else{
			ave=sum/n;
			for(i=0;i<n;i++){
				a[i].c=a[i].c-ave;
			}					
			count=0;
			f=1;
			c=0;			
			for(i=0;i<n-1;i++){			
				if(a[i].c>0){
					if(a[i].flag==1)
						f=0;
					a[i+1].c=a[i+1].c+a[i].c;
					a[i].flag=1;
					s1[c]=i+1;
					s2[c++]=i+2;
					continue;
				}
				if(a[i].c<0){
					a[i+1].c=a[i+1].c+a[i].c;
					a[i+1].flag=1;
					s1[c]=i+2;
					s2[c++]=i+1;
					continue;				
				}
				if(!f)
					break;
			}
			if(a[n-1].c==0&&f)
			{
				cout<<"YES"<<endl;
				for(i=0;i<c;i++)
				{
					cout<<s1[i]<<" "<<s2[i]<<endl;
				}				
			}
			else
				cout<<"NO"<<endl;
		}
		delete []a;
		delete []s1;
		delete []s2;
	} 
	return 0;
}

