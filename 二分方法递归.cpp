#include<iostream>
using namespace std;
int maxSeg(int *a,int left,int right){
	int mid=(left + right)>>1,ret,max1,max2;
	if(left==right)
		return a[left];
	max1=maxSeg(a,left,mid);
	max2=maxSeg(a,mid,right);
	ret=max(max1,max2);
	int temp1,temp2,ret1,ret2,i;
	for(i=mid-1;i>=0;i--)
	{
		temp1=temp1+a[i];
		if(temp1>ret1){
			
		}
	}
	return ret;	
}
int main()
{
	int a[]={2,-1,-4,3,6,-5,4,3,-2,2};
	 
	return 0;
}

