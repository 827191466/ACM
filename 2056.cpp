
#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x1,y1,x2,y2,x3,y3,x4,y4;	
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
    {
        if(x2<x1){
           double t;
           t=x2;
           x2=x1;
           x1=t;
        }if(y2<y1){
            double t;
            t=y2;
            y2=y1;
            y1=t;
        }
        if(x3>x4){
            double t;
            t=x3;
            x3=x4;
            x4=t;
        }
        if(y3>y4){
            double t;
            t=y3;
            y3=y4;
            y4=t;
        }
        if((x3>=x2||y3>=y2)||(x1>=x4||y1>=y4))
            cout<<"0.00"<<endl;
        else{
            sort(x,x+4);
            sort(y,y+4);
            double wide=x[2]-x[1];
            double high=y[2]-y[1];
            cout<<fixed<<setprecision(2)<<wide*high<<endl;
        }
    }return 0;
}
