// �������ж������£�

//f��1��= 1��f��2��= 1��f��n��=��A * f��n - 1��+ B * f��n - 2����mod 7. 

//����A��B��n����Ҫ����f��n����ֵ��

#include<iostream>
using namespace std;
int s[100000];
int main()
{
    s[1]=1;
    s[2]=1;
	int i,a,b,n;
	while(cin>>a>>b>>n){
		if(a==0&&b==0&&n==0)
			break;
		for(i=3;i<49;i++){
			s[i]=(a*s[i-1]+b*s[i-2])%7;
		}
		cout<<s[n%49]<<endl;
	}	
	return 0;
}

