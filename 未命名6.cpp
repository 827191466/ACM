#include<iostream>
using namespace std;
int main()
{
	int t,i,j,a[100],b[100],c[100],count1,count2,flag,n,m,s,d[4][2],count,k,f;
	while(cin>>t&&t){	
		for(i=0;i<t;i++){
			cin>>a[i]>>b[i]>>c[i];		
		}		
		s=0;
		for(i=1000;i<=9999;i++){
			flag=0;
			for(j=0;j<t;j++){
				count1=0;
				count2=0;
				count=0;
				n=a[j];
				m=i;
				while(n){
					if(m%10==n%10)
						count2++;
					d[count][0]=m%10;
					d[count][1]=0;
					count++;
					m=m/10;
					n=n/10;
				}
				n=a[j];
				while(n){
					for(k=0;k<4;k++)
					{
						if(d[k][0]==n%10&&d[k][1]==0)
						{
							count1++;
							d[k][1]=1;
							break;
						}
					}
					n/=10;
				}
				if(count1==b[j]&&count2==c[j])
					flag++;
			}
			if(flag==t){
				s++;
				f=i;
			}				
		}
		if(s==1)
			cout<<f<<endl;
		else
			cout<<"Not sure"<<endl;
	}	
	return 0;
}


