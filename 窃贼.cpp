#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char a[10000];
bool compare(char m,char n)
{
	return m>n;
}
int sum(int v,int w,int x,int y,int z)
{
	return v - w*w + x*x*x - y*y*y*y + z*z*z*z*z;
}
int main()
{
	int i,j,k,w,q,l,flag;
	long long t,s;
	while(cin>>t>>a)
	{
		if(t==0&&(strcmp(a,"END")==0))
			break;
		else
		{
			flag=0;
			l=strlen(a);
			sort(a,a+l,compare);
			for(i=0;i<l;i++){
				for(j=0;j<l;j++){
					if(i==j)
						continue;
					for(k=0;k<l;k++){
						if(k==j||k==i)
							continue;
						for(w=0;w<l;w++){
							if(w==k||w==j||w==i)
								continue;
							for(q=0;q<l;q++)
							{
								if(q==w||q==j||q==k||q==i)
									continue;
								s=sum(a[i]-64,a[j]-64,a[k]-64,a[w]-64,a[q]-64);
								if(s==t)
								{
									flag=1;
									cout<<a[i]<<a[j]<<a[k]<<a[w]<<a[q]<<endl;
								}
							}
							if(flag)
								break;
						}
						if(flag)
							break;
					}
					if(flag)
						break;					
				}
				if(flag)
					break;
			}
			if(flag==0)
				cout<<"no solution"<<endl;
		}
	}
	return 0;
}

