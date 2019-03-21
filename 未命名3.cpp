#include<iostream>
using namespace std;
int main()
{
	char op[4];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				for(m=0;m<4;m++){				
					op[0]=ops[i];
					op[1]=ops[j];
					op[2]=ops[k];
					op[3]=ops[m];
					int f=1;
					double q=a[0],p=0;
					for(i=0;i<4;i++)
                	{
						switch(op[i]){
							case '+':
								p+=q*f;
								f=1;
								q=a[i+1];
								break;
							case '-':
								p+=q*f;
								f=-1;
								q=a[i+1];
								break;
							case '*':
								q=q*a[i+1];
								break;
							case '/':
								if(a[i+1]!=0)
									q/=a[i+1];
								else
									cout<<"除数不能为0"<<endl; 
								break; 
						}
					}
					if(p+q*f==21)
						cout<<a[0]<<op[0]<<
				}
			}
		}
	}
	return 0;
}

