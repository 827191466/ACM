#include<iostream>
using namespace std;
#define UP 10000.0
struct point{
	double x,y;
};
int a,b,c;
double f(double x){
	return a*x*x+b*x+c;
}
double dis(point p1,point p2){
	return (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
} 
double triSearch(double left,double right){
	
	double lm=left+(right-left)/3;
	double rm=right-(right-left)/3;
	point p1,p2;
	p1.x=lm,p2.x=rm;
	p1.y=f(lm),p2.y=f(rm);
	if(abs(lm-rm)<le-6)
		return dis(p1,p2);
	if(dis(p1,p)<dis(p2,p)){
		return triSearch(left,rm);
	}else{
		return triSearch(lm,right);
	}
}
int main()
{
	point p;
	double t,ret;
	cin>>a>>b>>c;
	cin>>p.x>>p.y;
	t=-1.0*b/2/a;
	if(p.x>=t){
		ret=triSearch(t,UP);
	}
	else{
		ret=triSearch(-UP,t);
	}
	return 0;
}

