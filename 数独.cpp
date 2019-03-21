#include<iostream>
using namespace std;
int x[9][9];
bool judge(int row,int col,int a){
	int i,j;
	for(i=0;i<9;i++){
		if(x[row][i]==a)
			return false;
	}
	for(i=0;i<9;i++){
		if(x[i][col]==a)
			return false;
	}
	for(i=row/3*3;i<row;i++)
	{
		for(j=col/3*3;j<col/3*3+3;j++)
			if(x[i][j]==a)
				return false;
	}
	for(i=col/3*3;i<col;i++){
		if(x[row][i]==a)
			return false;
	}
	return true;
}
void dfs(int row,int col){
	int i,j;
	if(row>8){	
		for(i=0;i<9;i++){
			for(j=0;j<9;j++)
				cout<<x[i][j];
			cout<<endl;
		}
		return;
	}
	if(x[row][col]){
		if(col==8)
			dfs(row+1,0);
		else
			dfs(row,col+1);
	}
	else{
		for(i=1;i<=9;i++)
		{
			if(judge(row,col,i))		
			{
				//cout<<row<<" "<<col<<endl;
				x[row][col]=i;
				if(col==8)
					dfs(row+1,0);
				else
					dfs(row,col+1);
				x[row][col]=0;
			}
		}
	}

}
int main()
{
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++)
			cin>>x[i][j];
	}
	dfs(0,0);
	return 0;
}

