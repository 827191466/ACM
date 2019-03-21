#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
struct player
{
	string name;
	int n;
	int grade;
}; 
bool cmp(player a,player b)
{
	if(a.grade>b.grade)
		return true;
	else
	{
		if(a.grade==b.grade)
		{
			if(a.n<b.n)
			{
				return true;
			}
		}
	}
}
bool operator==(const string &x)
{
	return(this.name==x);
}
int main()
{
	player P;
	vector<player> p; 
	int n,i;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>P.name;
			cin>>P.grade;
			P.n=i+1;
			vector::iterator it=find(p.begin(),p.end(),P.name);
			if(it==NULL)
				p.push_back(P);
			else
			{
				p[it].garde+=P.grade;
				p[it].n=P.n;
			}
		}
	}
	sort(p.begin(),p.end(),cmp);
	cout<<p[0].name<<endl;
	return 0;
}
