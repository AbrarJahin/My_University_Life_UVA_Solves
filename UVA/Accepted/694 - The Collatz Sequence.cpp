/*
	UVa 694 - The Collatz Sequence
*/

#include<stdio.h>
#include<stdlib.h>
long numberOfTerms(long A,long L)
{
	long n=0;
	while(A<=L && A!=1)
	{
		if(A&1)	//A&1 == A%2
			A=3*A+1;
		else
			A>>=1;	//A>>=1 == a/=2
		n++;
	}
	if(A==1)
	n++;
	return(n);
}
int main()
{
	long cases=1,n,A,L;
	while(scanf("%ld%ld",&A,&L)==2 && A>0 && L>0)
		printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",cases++,A,L,numberOfTerms(A,L));
	return(0);
} 