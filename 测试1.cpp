#include<iostream>
using namespace std;
int main()
{
	int t,n,i,count;
	cin>>t;
	while(t--){
		cin>>n;
		count=0;
		int *a =new int[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==0)
				count++;
		}
		if(count==n){
			cout<<"xf"<<endl;
			continue;		
		}			
		else
			cout<<"xm"<<endl;
		delete []a;
	} 
	return 0;
}

