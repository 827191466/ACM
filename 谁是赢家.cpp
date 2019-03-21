#include <map>
#include <set>
#include <iostream>
using namespace std;
#define tr(c, i) for (i = (c).begin(); i != (c).end(); i++)
int main()
{

	int m,n;
	cin>>m;
	while(m--)
	{
		map < string, int > score;
		map <string,int>time; 
		set < string > winners;
		string s[1005];
		int t[1005];
		cin >> n;
	    for (int i = 0; i < n; i++)
		    cin >> s[i] >> t[i];
		for (int i = 0; i < n; i++)
		    score[ s[i] ] += t[i];
	   int maxs = -(1 << 30);
	   map < string, int > :: iterator it;
	   tr(score, it)
	   {
	      if (maxs < it->second)
	      {
	         maxs = it->second;
	         winners.clear();
	      }
	      if (maxs == it->second)
	         winners.insert(it->first);
	   }
	   score.clear(); 
	   int min=n;
	   for (int i = 0; i < n; i++)
	   {
	      score[ s[i] ] += t[i];
	      if (score[ s[i] ] >= maxs)
	      {
	         time[s[i]]=i;
	         if(i<min)
	           min=i;
	      }
	  }
	  cout<<s[min]<<endl;
   }  
   return 1;
}

