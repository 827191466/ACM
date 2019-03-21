#include<iostream>
#include<algorithm>
using namespace std;
struct zero{
	int hp;
	int dps;
	double c;
};
int cmp(zero a,zero b)
{
	if(a.c!=b.c)
		return a.c>b.c;
	else
		return a.hp<b.hp;
}
int main()
{
	int n,i,j,sum;
	while(cin>>n){
		zero *z=new zero[n];
		for(i=0;i<n;i++){
			cin>>z[i].dps>>z[i].hp;
			z[i].c=(double)z[i].dps/z[i].hp;
		}
		sort(z,z+n,cmp);	
		sum=0;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				sum+=z[j].dps*z[i].hp;
			}
			sum+=z[i].hp*z[i].dps;
		}
		cout<<sum<<endl;	
		delete []z;
	}
	return 0;
}

