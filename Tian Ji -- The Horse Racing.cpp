#include<iostream>
#include<algorithm>
using namespace std;
int cmp(int m,int n)
{
    return m  >  n;
}  
int a[3000];
int b[3000];
int main()
{
	int n,i,count,sum,j,c,d;
	while(cin>>n&&n)
	{	
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a,a+n,cmp);
		sort(b,b+n,cmp);
		count=0;
		sum=0;
		i=0;
		j=0;
		c=n-1;
		d=n-1;
		while(1){
			if(count==n)
				break;
			if(a[i]>b[j]){
				i++;
				j++;
				sum+=200;
				count++;
				continue;
			}
			if(a[i]<b[j]){
				c--;
				j++;
				sum-=200;
				count++;
				continue;
			}
			if(a[i]==b[j]){
				if(a[c]>b[d]){
					c--;
					d--;
					sum+=200;
					count++;
				}
				else{
					if(a[c]<b[j]){
						c--;
						j++;
						count++;
						sum-=200;
					}
					else
					{
						c--;
						j++;
						count++;
					}
				}
				continue;
			}
		}
		cout<<sum<<endl;
	} 
	return 0;
}


#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[3000],b[3000];
int cmp(int a,int b)
{
  return a>b;    
}
int main()
{
   int i,n,j,sum,k,f,ji;
   while( scanf("%d",&n) && n!=0 )
   {
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);  
      for(i=0;i<n;i++)      
        scanf("%d",&b[i]);
      sort(a,a+n,cmp);   
      sort(b,b+n,cmp);
      ji=0;    //   记录 king  比赛用的马  循环跳出的判定条件 
      i=j=sum=0;
      k=n-1;
      f=n-1;
      while(1)
      {           
          if(ji==n)   break;   //   king  的马全部比完后跳出 
          if(b[j]>a[i]) {   sum-=200;j++;k--;ji++; continue;}  //如果king的比tian的快马快 用tian的慢马对king的快马 
          if(b[j]==a[i]){                                       //如果相等 
                            if(b[f]<a[k]){f--;k--;sum+=200;ji++;continue;} //看两人的慢马 tian的慢马比king的慢马快则比 
                            if(b[j]>a[k]){sum-=200;k--;j++;ji++;}
                            else {k--;j++;ji++;}
                            continue;
                        }
          if(b[j]<a[i]){sum+=200;j++;i++;ji++;continue;}  //如果tian的比king的快马快 直接比 
      }          
      printf("%d\n",sum);    
   }
}
/*1、如果田忌最快的马比齐王最快的马快，则比之

2、如果田忌最快的马比齐王最快的马慢，则用田最慢的马跟齐最快的马比  

3、如果田忌最快的马的速度与齐威王最快的马速度相等

3.1、如果田忌最慢的比齐威王最慢的快，则比之       

3.2、如果田忌最慢的比齐威王最慢的慢，田忌慢VS齐王快

3.3、田忌最慢的与齐威王最慢的相等，田忌慢VS齐王快*/
