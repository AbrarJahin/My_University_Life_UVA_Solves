/*
	UVA 10341 - Solve It
	Solviing 1 value unknown expression with Newton's Method
*/


#include <stdio.h>
#include <math.h>
#define EPS 1e-7
 
int p,q,r,s,t,u;
double f(double x)																//Main Function
{
	return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

double fd(double x)																//Derivative of main Function
{
	return -p*exp(-x) + q*cos(x) - r*sin(x) + s/(cos(x)*cos(x)) + 2*t*x;
}


/*/////////////////////////////////////////////////////////////////
 	//The easiest to implement is the Bisection method:
double bisection()
{
	double lo = 0, hi = 1;
	while (lo + EPS < hi)
	{
		double x = (lo+hi)/2;
		if (f(lo) * f(x) <= 0)
		{
			hi = x;
		}
		else
		{
			lo = x;
		}
	}
	return (lo+hi)/2;
}
/////////////////////////////////////////////////////////////////*/


///////////////////////////////////////////////////////////////////
//The most effective is the Newton's method:
double newton()
{
	if (f(0)==0)								//If derrivative is 0 then return
		return 0;
	double x=0.5;							// initial guess x = 0.5
	while(1)
	{             
		double x1 = x-f(x)/fd(x);			// x1 = next guess
    	if (fabs(x1-x)<EPS)				//STL => Return absolute value
			return x;  // the guess is accurate enough
    	x = x1;
	}
}
///////////////////////////////////////////////////////////////////



int main()
{
	while (scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF)
	{
		if(f(0)*f(1) > 0)
		{
			puts("No solution");
	    }
		else
		{
			printf("%.4lf\n", newton());
		}
	}
	return 0;
}