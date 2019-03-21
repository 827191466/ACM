#include<iostream>
using namespace std;
int find(int l,int r){
	if(r-l==1)
		return sqrt((p[r].x-p[l].x)*(p[r].x-p[l].x)+(p[r].y-p[l].y)*(p[r].y-p[l].y));
	int	mid=(l+r)/2;
	int	min1=find(l,mid);
	int min2=find(mid,r);
	int t=min(min1,min2);
	if(p[mid+1]-p[mid-1]>t)
		return t;
	else{
		
	}
	
} 
int main()
{
	return 0;
}

