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
            sum+=a[i];//�ۼ��ǹ��� 
            if(a[i]>a[maxx])//�ҵ�ӵ���ǹ��������Ǹ��� 
                maxx=i;
        }
        if(sum%n!=0)//����������������,�޽� 
        {
            printf("NO\n");
            continue;
        }
        av=sum/n;//��ֵ 
        if(a[maxx]>av+2)//���ֵ������ֵ2������,�޽� 
        {
            printf("NO\n");
            continue;
        }
        if(a[maxx]==av)//���ֵ���ھ�ֵ,��ô�����˵��ǹ��������ھ�ֵ,�н��Ҳ��ý����κβ��� 
        {
            printf("YES\n0\n");
            continue;
        }
        int flag1=1,flag2=1;//������������Ƿ���ڿ��н� 
        int res=0;
        pair<int,int>ans[maxn];//��¼����,��һ��ֵ���ڶ���ֵ�� 
        //���Ҵ� 
        for(int i=0,j=maxx;i<n;i++,j=(j+1)%n)
        {
            int k=(j+1)%n;
            if(b[j]==av+1|| j==maxx&&b[j]==av+2)//�����ǰ�˶�һ���ǻ��ߵ�ǰ����ӵ���ǹ����������ұȾ�ֵ��������ô����˱������һ����һ���� 
            {
                b[j]--,b[k]++;//����˸���һ����һ���� 
                //��¼�ò��� 
                ans[res].first=j;
                ans[res++].second=k;
            }
            else if(b[j]==av)//��ǰ���ǹ������ھ�ֵ���ò��� 
                continue;
            else if(b[j]==av-1)//��ǰ����һ������������һ����������һ���� 
            {
                b[j]++,b[k]--;//��һ���˸���һ����һ����
                //��¼�ò��� 
                ans[res].first=k;
                ans[res++].second=j;
            }
            else//����˵��ǹ�����������Χ 
            {
                flag1=0;//�ı��Ǳ�����ֵ 
                res=0;//���������� 
                break;//�˳�ѭ�� 
            }
        }
        if(flag1)//���Ҵ��п��н�ֱ�����������һ������ 
        {
            printf("YES\n");
            printf("%d\n",res);
            for(int i=0;i<res;i++)
                printf("%d %d\n",ans[i].first+1,ans[i].second+1);
            continue;
        }
        //���Ҵ����о����� 
        for(int i=0,j=maxx;i<n;i++,j=(j+n-1)%n)
        {
            int k=(j+n-1)%n;
            if(a[j]==av+1|| j==maxx&&a[j]==av+2)//�����ǰ�˶�һ���ǻ��ߵ�ǰ����ӵ���ǹ����������ұȾ�ֵ��������ô����˱������һ����һ���� 
            {
                a[j]--,a[k]++;//����˸���һ����һ����
                //��¼�ò��� 
                ans[res].first=j;
                ans[res++].second=k;
            }
            else if(a[j]==av)//��ǰ���ǹ������ھ�ֵ���ò��� 
                continue;
            else if(a[j]==av-1)//��ǰ����һ������������һ����������һ���� 
            {
                a[j]++,a[k]--;//��һ���˸���һ����һ����
                //��¼�ò��� 
                ans[res].first=k;
                ans[res++].second=j;
            }
            else//����˵��ǹ�����������Χ  
            {
                flag2=0;//�ı��Ǳ�����ֵ 
                res=0;//���������� 
                break;//�˳�ѭ��
            }
        }
        if(flag2)//�����п��н� 
        {
            printf("YES\n");
            printf("%d\n",res);
            for(int i=0;i<res;i++)
                printf("%d %d\n",ans[i].first+1,ans[i].second+1);
            continue;
        }
        printf("NO\n");//�����ߴ���û���н����޽� 
    }
    return 0;
} */
