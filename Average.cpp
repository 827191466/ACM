#include<iostream>
#include<algorithm>
using namespace std;
struct cake{
	int c;
	int flag;
	int r;
};
int cmp(cake m,cake n)
{
	return m.c<n.c;
}
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
			a[i].r=i+1;
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
			sort(a,a+n,cmp);
			count=0;
			f=1;
			c=0;
			while(count!=n){
				sort(a,a+n,cmp);
				for(i=0;i<n;i++){
					for(j=n-1;j>=0;j--){
						s=a[j].c+a[i].c;
						if(s>0&&j!=i&&a[j].flag!=1){
							count++;
							f=0;
							break;
						}
						if(a[j].c==0&&a[i].c==0){
							count=n;
							break;
						}
						if(s<=0&&j!=i&&a[j].flag!=1){
							a[j].flag=1;
							a[j].c=s;
							a[i].c=s;
							s1[c]=a[j].r;
							s2[c++]=a[i].r;
							count++;
							break;
						}						
					}
					if(!f)
						break;
				}
				if(!f)
					break;				
			}
			if(f){
				cout<<"YES"<<endl;
				for(i=0;i<c;i++)
				{
					cout<<s1[i]<<" "<<s2[i]<<endl;
				}
			}
			else
				cout<<"NO"<<endl;
		}
	} 
	return 0;
}

