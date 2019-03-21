#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,i;
	while(cin>>n>>m){
		int *x=new int[m+n];
		for(i=0;i<n;i++)
			cin>>x[i];
		for(i=n;i<m+n;i++)
			cin>>x[i];
		sort(x,x+m+n);
		for(i=0;i<m+n-1;i++){
			if(x[i]==x[i-1])
				continue;
			cout<<x[i]<<" ";
		}
		cout<<x[m+n-1]<<endl;
		delete []x;
	}	
	return 0;
}

