#include<iostream>
#include<algorithm>
using namespace std;
#define N 15
struct point{
	int x,y,z;
}bo[N],ul,rd; 
int main()
{
	int a[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},i,n,j;
	double ra,dis,ras[15],retT;
	cin>>n;
	cin>>ul.x>>ul.y>>ul.z;
	cin>>rd.x>>rd.y>>rd.z;
	for(i=0;i<n;i++)
	{
		cin>>bo[i].x>>bo[i].y>>bo[i].z;
	}
	do{
		retT=0;
		for(i=0;i<n;i++){
			ra=min(rd.x-bo[a[i]].x,bo[a[i]].x-ul.x);
			ra=min(ra,min(ul.y-bo[a[i]].y,bo[a[i]].y-rd.y))
			ra=min(ra,min(ul.z-bo[a[i]].z,bo[a[i]].z-rd.z))
			for(j=0;j<i;j++){
				dis=sqrt((bo[a[i]].x-bo[a[j]].x)*(bo[a[i]].x-bo[a[j]].x)+
				         (bo[a[i]].y-bo[a[j]].y)*(bo[a[i]].y-bo[a[j]].y)+
						 (bo[a[i]].z-bo[a[j]].z)*(bo[a[i]].z-bo[a[j]].z))
				dis-=ras[j];
				ra=max(0,min(ra,dis));
			}
			ras[i]=ra;
			retT=4.0/3*PI*ra*ra*ra;
		}		
	} while(next_permutation(a,a+7));//È«ÅÅÁÐ 
	return 0;
}

