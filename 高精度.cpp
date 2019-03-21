#include<iostream>
#include<cstring>
using namespace std;
#define MAXDIGITS 1000
#define PLUS 1
#define MINUS -1
class bignum{
	char digits[MAXDIGITS];
	int signbit;
	int lastdigit;
public:
	bignum(char *s);
	bignum();
	bignum(int k);
	friend ostream &operator<<(ostream &cout,bignum &bn);
	
};
bignum::bignum()
{
	lastdigit=0;
	digits[0]='0';
}
bignum::bignum(int k)
{
	lastdigit=1;
	while(k){
		k/=10;
	}
}
bignum::bignum(char *s){
	lastdigit=strlen(s)-1;
	for(int i=0;i<strlen(s);i++)
	{
		digits[lastdigit-i]=s[i];
	} 
}
 ostream &operator<<(ostream &cout,bignum &bn){
		int i;
		if(bn.signbit==MINUS)
			cout<<'-';
		for(i=bn.lastdigit;i>=0;i--)
			cout<<bn.digits[i];			
		cout<<endl;
		return cout; 
}
int main()
{
	bignum bn("1233445");
	cout<<bn;
	return 0;
}

