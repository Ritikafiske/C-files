#include<iostream>
using namespace std;
double shape(double,double);
double shape(int,int);
double shape(double);

int main()
{
	double a,b,c,d;
	a=2,b=3,c=4.5,d=1.5;
	cout<<shape(a,b)<<endl;
	cout<<shape(3.14,c)<<endl;
	cout<<shape(d)<<endl;
	return 0;
}

double shape(int x, int y)
{
	
	return x*y;
}

double shape( double r,double z)
{
	float q;
	q= r*z*z;
	return q;
}

double shape(double s)
{
	float m;
	m=s*s;
	return s;
}
