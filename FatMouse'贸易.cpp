#include<iostream>
#include<algorithm>
using namespace std;
struct cat{
	int J;
	int F;
	double a;
};
int cmp(cat m,cat n){
	return m.a>n.a;
}
int main()
{
	int m,n,i,j;
	double max;
	while(cin>>m>>n){
		if(m==-1&&n==-1)
			break;
		cat *c=new cat[n];
		for(i=0;i<n;i++){
			cin>>c[i].J>>c[i].F;
			c[i].a=(double)c[i].J/c[i].F;
		}			
		sort(c,c+n,cmp);
		max=0;
		for(i=0;i<n;i++)
		{
			if(m>c[i].F){
				max+=c[i].J;
				m=m-c[i].F;
			}
			else{
				max+=c[i].a*m;
				break;
			}
		}
		printf("%.3lf\n",max);//”√printf 
		delete[]c;
	} 
	return 0;
}

