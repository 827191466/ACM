#include<iostream>
#include<algorithm>
using namespace std;
struct change{
	int i;
	int j;
};
bool cmp(change a,change b){
	if(a.j!=b.j)
		return a.j<b.j;
	else
		return a.i>b.i;
}
int main()
{
	int t,t1,i,count;
	string n;	
	cin>>t;
	while(t--){
		cin>>n;
		int t1=n[n.length()-1]-'0';
		change *t2=new change[n.length()];
		count=0;
		for(i=0;i<n.length()-1;i++){
			if((n[i]-'0')%2==0){
				t2[count].i=n[i]-'0';
				t2[count].j=i;
				count++;
			}				
		}
		if(count==0)
			cout<<-1<<endl;
		else{
			sort(t2,t2+count,cmp);
			for(i=0;i<count;i++)
			{
				if(t2[i].i<t1){
					n[n.length()-1]=n[t2[i].j];
					n[t2[i].j]=t1+'0';
					break;
				}
			}
			if(i==count){
				n[n.length()-1]=n[t2[count-1].j];
				n[t2[count-1].j]=t1+'0';
			}
			cout<<n<<endl;				
		}	
	}
	return 0;
}

