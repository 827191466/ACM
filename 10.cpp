#include<iostream>
using namespace std;
#define N 505
int n,m,p;
struct node{
	int data;
	
};
int Union(int x,int y){
	x=Find(x),y=Find(y);
	if(x!=y){
		if(uf[x].rank<uf[y])
	}
}
in()
{
	int i;
	cin>>n>>m>>p; 
	for(i=1;i<=n;i++)
		uf[i].parent=i;
	for(i=0;i<m;i++){
		int x,y;
		Union(x,y);
	}
	for(i=0;i<p;i++){
		cin>>x>>y;
		x=Find1(x);
		y=Find1(y);
		if(x==y)	
			cout<<"Yes"<<endl;
		else
			cout<<
	}
	return 0;
}

