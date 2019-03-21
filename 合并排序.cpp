#include<iostream>
using namespace std;
int a[]={6,2,3,4,7,1,10,9}
void merge(int left,int mid,int right){
	int i=left,int j=mid+1;
	int *b=new int[right-left+1];
	int cnt=0;
	while(i<=mid||j<=right){
		if(a[i]<a[j])
		{
			b[cnt++]=a[i];
			i++;
		}else{
			b[cnt++]=a[j];
			j++;
		}		
	}
	for(i;i<=mid;i++)
	{
		b[cnt++]=a[i];
	}
	for(j;j<=right;j++)
	{
		b[cnt++]=a[j];
	}
	delete[]b;
	
}
void mergeSort(int left,int right){
	if(left>=right)
		return;
	int mid=(right+left)>>1;
	mergeSort(left,mid);
	mergeSort(mid+1,right);
	merge(left,mid,right);	
} 
int main()
{
	return 0;
}

