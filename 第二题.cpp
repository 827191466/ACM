#include<iostream>
using namespace std;
int main()
{
	int t,l1,l2,c1,c2,i,j,k;
	string str,sub;
	cin>>t;
	while(t--){
		cin>>l1>>l2>>str>>sub;
		int *s1=new int[l1];	
		int *s2=new int[l1];	
		c2=l1+1;
		for(i=0;i<=l2-l1;i++){
			c1=0;				
			for(j=0;j<l1;j++){					
				if(sub[i+j]!=str[j])
				{
					s1[c1]=j+1;
					c1++;					
				}					
			}
			if(c1<c2){
				c2=c1;
				for(k=0;k<c2;k++){
					s2[k]=s1[k];
				}
			}	
		}
		if(c2==0)
			cout<<0<<endl;
		else{
			cout<<c2<<endl;
			for(i=0;i<c2;i++){
				cout<<s2[i]<<" ";
			}
			cout<<endl;
		}
		delete []s1;
		delete []s2;		
	}
	return 0;
}

