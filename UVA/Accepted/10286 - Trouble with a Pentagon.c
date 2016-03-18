#include<stdio.h>

int main()
{
	long double x;
	long double y=1.067395681711181;
	while((scanf("%Lf",&x))!=EOF)
		printf("%.10Lf\n",x*y);
	return 0;
}