/*//////////////////////////////////////////////////////////
	Problem no 1005 - Packing polygons
	Problem => http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3446
//////////////////////////////////////////////////////////*/

#include<stdio.h>

unsigned __int64 Answer(unsigned __int64 n);
unsigned __int64 LCM(unsigned __int64 a,unsigned __int64 b);

int main()
{
	unsigned __int64 a;
	scanf("%I64u",&a);
	a=Answer(a);
	printf("%I64u",a);
	return 0;
}


unsigned __int64 LCM(unsigned __int64 a,unsigned __int64 b)
{
	unsigned __int64 temp;
	while((b%a)!=0)
	{
		temp=b%a;
		b=a;
		a=temp;
	}
	return a;
}

unsigned __int64 Answer(unsigned __int64 n)
{
	unsigned __int64 Count = 0,I;
	for (I = 1; I <= n; I++)
	{
		if(LCM(I,n)<(n * I))
		{
			Count++;
		}
	}
	return Count;
}