#include<iostream>
#include<cstring>
using namespace std;
int judge(char s)
{
	if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
		return 1;
	return 0;
}
int main()
{
	int i,j,flag;
	char a[21];
	while(cin>>a)
	{
		if(strcmp(a,"end")==0)
			break;
		else
		{
			flag=0;
			for(i=0;i<strlen(a);i++)
			{
				if(judge(a[i])){
					flag=1;
					break;
				}
			}				
			if(flag){				
					for(i=0;i<strlen(a);i++)
					{
						if(i+2<strlen(a)&&((judge(a[i])&&judge(a[i+1])&&judge(a[i+2]))||(!judge(a[i])&&!judge(a[i+1])&&!judge(a[i+2])))){
							flag=0;
							break;
						}						
						if(a[i]==a[i+1]&&a[i]!='e'&&a[i]!='o'){
							flag=0;
							break;
						}					
					}
				if(flag)
					cout<<"<"<<a<<"> is acceptable."<<endl;
				else
					cout<<"<"<<a<<"> is not acceptable."<<endl;
			}else
				cout<<"<"<<a<<"> is not acceptable."<<endl;			
		}
	}
	return 0;
}

