#include<iostream>
using namespace std;
int Find(int x){
	if(x==uf[x].parent)
		return x;
	int pa=uf[x].parent;
	uf[x].parent=Find(uf[x].parent);
	uf[x].rel=uf[x].rel^uf[pa].rel;
	return uf[x].parent;
}

int Find1(int x){
	int k=x,k1,re,idx[N],cnt=0;
	while(k£¡=uf[k].parent){
		k=uf[k].parent;
		idx[cnt++]=k;
		k=uf[k].parent;
	}
	for(i=cnt-2;i>=0;i++){
		uf[i].rel=uf[i].rel^uf[i].
		
	}
	/*while(x!=uf[k].parent){
		k1=uf[k].parent;
		uf[k].parent=k;
		x=k1;
	}*/ 
	return k;
}

int Union(int u,int v){
	x=Find(u),y=Find(v);
	if(x!=y){
		if(uf[x].rank<uf[y].rank){
			uf[x].parent=y;
			uf[x].rel=r^uf[u].rel^uf[v].rel;
		}
	}else{
	uf[y].parent =x;
	uf[y].rel=r^uf[u].rel^uf[v].rel;
	if(uf[x].rank==uf[y].rank)
		uf[x].rank++;
		
}
int main()
{
	return 0;
}

