#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,i,ave,f,c,s;
    long long int sum;
    cin>>t;
    while(t--){    
        scanf("%d",&n);
        int *a=new int[n];
        int *b=new int[n];
        int *s1=new int[n];
        int *s2=new int[n];
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if(sum%n!=0)
            cout<<"NO"<<endl;
        else{
                f=1;
                ave=sum/n;
                for(i=0;i<n;i++){
                    b[i]=a[i]-ave;                
                }    
                c=0;            
                for(i=1;i<n-1;i++){    
                    if(b[i]==-1||b[i]==-2){
                        b[i+1]--;
                        b[i]++;
                        s1[c]=i+2;
                        s2[c++]=i+1;
                        continue;
                    }
                    if(b[i]==1||b[i]==2){
                        b[i+1]++;
                        b[i]--;
                        s1[c]=i+1;
                        s2[c++]=i+2;     
						continue;                   
                    } 
					if(b[i]==0)
						continue;  
					break;    
                }
                if(b[n-1]==-1){
                    b[0]--;
                    b[n-1]++;
                	s1[c]=1;
                    s2[c++]=n;
                }
                if(b[n-1]==1){
                    b[0]++;
                	b[n-1]--;
                    s1[c]=n;
                    s2[c++]=1;                       
                } 
                for(i=0;i<n;i++){
                    if(b[i]!=0)
                    {
                        f=0;
                        break;
                    }
                }
                if(!f){
	                f=1;
	                for(i=0;i<n;i++){
	                    b[i]=a[i]-ave;                
	                }    
	                c=0;            
	                for(i=n-2;i>0;i--){    
	                    if(b[i]==-1||b[i]==-2){
	                        b[i-1]--;
	                        b[i]++;
	                        s1[c]=i;
	                        s2[c++]=i+1;
	                        continue;
	                    }
	                    if(b[i]==1||b[i]==2){
	                        b[i-1]++;
	                        b[i]--;
	                        s1[c]=i+1;
	                        s2[c++]=i;     
							continue;                   
	                    } 
						if(b[i]==0)
							continue;  
						break;    
	                }
	                if(b[0]==-1){
	                    b[0]++;
	                	b[n-1]--;
	                    s1[c]=n;
	                    s2[c++]=1;   					
                	}
	                if(b[0]==1){
						b[0]--;
	                    b[n-1]++;
	                	s1[c]=1;
	                    s2[c++]=n;              
	                } 
	                for(i=0;i<n;i++){
	                    if(b[i]!=0)
	                    {
	                        f=0;
	                        break;
	                    }
                	}               	
                }
                if(f)
                {
                    cout<<"YES"<<endl;
                    cout<<c<<endl;
                    for(i=0;i<c;i++)
                    {
                        cout<<s1[i]<<" "<<s2[i]<<endl;
                    }                                
                }
                else
                    cout<<"NO"<<endl;    
        }    
        delete []b;
        delete []a;
        delete []s1;
        delete []s2;            
    } 
    return 0;
}

/*
#include<cstdio>
#include<iostream>
using namespace std;
#define maxn 111111
int a[maxn],b[maxn];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long sum=0;
        int av=0,maxx=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
            sum+=a[i];//累加糖果数 
            if(a[i]>a[maxx])//找到拥有糖果数最多的那个人 
                maxx=i;
        }
        if(sum%n!=0)//总数不能整数人数,无解 
        {
            printf("NO\n");
            continue;
        }
        av=sum/n;//均值 
        if(a[maxx]>av+2)//最大值超过均值2及以上,无解 
        {
            printf("NO\n");
            continue;
        }
        if(a[maxx]==av)//最大值等于均值,那么所有人的糖果数都等于均值,有解且不用进行任何操作 
        {
            printf("YES\n0\n");
            continue;
        }
        int flag1=1,flag2=1;//标记两个方向是否存在可行解 
        int res=0;
        pair<int,int>ans[maxn];//记录步骤,第一键值给第二键值糖 
        //向右传 
        for(int i=0,j=maxx;i<n;i++,j=(j+1)%n)
        {
            int k=(j+1)%n;
            if(b[j]==av+1|| j==maxx&&b[j]==av+2)//如果当前人多一颗糖或者当前人是拥有糖果数最多的人且比均值多两颗那么这个人必须给下一个人一颗糖 
            {
                b[j]--,b[k]++;//这个人给下一个人一颗糖 
                //记录该步骤 
                ans[res].first=j;
                ans[res++].second=k;
            }
            else if(b[j]==av)//当前人糖果数等于均值不用操作 
                continue;
            else if(b[j]==av-1)//当前人少一颗糖则必须从下一个人手中拿一颗糖 
            {
                b[j]++,b[k]--;//下一个人给这一个人一颗糖
                //记录该步骤 
                ans[res].first=k;
                ans[res++].second=j;
            }
            else//这个人的糖果数超过合理范围 
            {
                flag1=0;//改变标记变量的值 
                res=0;//步骤数清零 
                break;//退出循环 
            }
        }
        if(flag1)//向右串有可行解直接输出进行下一组用例 
        {
            printf("YES\n");
            printf("%d\n",res);
            for(int i=0;i<res;i++)
                printf("%d %d\n",ans[i].first+1,ans[i].second+1);
            continue;
        }
        //向右传不行就向左传 
        for(int i=0,j=maxx;i<n;i++,j=(j+n-1)%n)
        {
            int k=(j+n-1)%n;
            if(a[j]==av+1|| j==maxx&&a[j]==av+2)//如果当前人多一颗糖或者当前人是拥有糖果数最多的人且比均值多两颗那么这个人必须给上一个人一颗糖 
            {
                a[j]--,a[k]++;//这个人给上一个人一颗糖
                //记录该步骤 
                ans[res].first=j;
                ans[res++].second=k;
            }
            else if(a[j]==av)//当前人糖果数等于均值不用操作 
                continue;
            else if(a[j]==av-1)//当前人少一颗糖则必须从上一个人手中拿一颗糖 
            {
                a[j]++,a[k]--;//上一个人给这一个人一颗糖
                //记录该步骤 
                ans[res].first=k;
                ans[res++].second=j;
            }
            else//这个人的糖果数超过合理范围  
            {
                flag2=0;//改变标记变量的值 
                res=0;//步骤数清零 
                break;//退出循环
            }
        }
        if(flag2)//向左传有可行解 
        {
            printf("YES\n");
            printf("%d\n",res);
            for(int i=0;i<res;i++)
                printf("%d %d\n",ans[i].first+1,ans[i].second+1);
            continue;
        }
        printf("NO\n");//向两边传都没可行解则无解 
    }
    return 0;
} */
