#include<iostream>
#include<algorithm>
using namespace std;
struct road{
	int a;
	int b;
};
int cmp(road m,road n){
	return m.b>n.b;
}
int main()
{
	int m,n,i,sum;
	while(cin>>n>>m){
		if(m==0&&n==0)
			break;
		sum=0;
		road *r=new road[n];
		for(i=0;i<n;i++){
			cin>>r[i].a>>r[i].b;
			sum+=r[i].a*r[i].b;
		}
		sort(r,r+n,cmp);
		for(i=0;i<n;i++){
			if(r[i].a>=m){
				sum-=m*r[i].b;
				break;
			}
			else{
				sum-=r[i].a*r[i].b;
				m-=r[i].a;
			}
		}
		cout<<sum<<endl;
		delete []r;
	} 
	return 0;
}

