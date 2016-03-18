/*
	UVa 371 - Ackermann Functions
*/



#include <stdio.h>
int sequenceLength(unsigned int n)
{
	int length = 0;
	do
	{
		length+=(1+(n&1));
		n = ((1 + (2 * (n & 1))) *  n + 1)>> 1;
	}while(n!=1);
	return length;
}
int main()
{
	int maxI,max,n,m,t,i,c;
	scanf("%d %d",&n,&m);
	while(n||m)
	{
		maxI = -1;
		max = -1;
		if(n>m)
		{
			t = m;
			m = n;
			n = t;
		}
		for(i=n;i<=m;i++)
		{
			c = sequenceLength(i);
			if(c>max)
			{
				maxI=i;
				max = c;
			}
		}
		printf("Between %d and %d, %d generates the longest sequence of %d values.\n",n, m, maxI, max);
		scanf("%d %d",&n,&m);
	}
	return 0;
}

/*
#include<iostream>
using namespace std;

long algorithm_given_by_Lothar_Collatz_on_product_sequenes_of_integers(long long a)
{
	long counter=0;
	while(a!=1)
	{
		if(a%2)
			a=3*a+1;
		else
			a/=2;
		counter++;
	}
	return counter;
}

int main()
{
	long L,H,i,longestSequence,valueGenerator,temp;
	while(cin>>L>>H)
	{
		if(L==0 && H==0)
			break;
		else if(L>H)
		{
			temp=L;
			L=H;
			H=temp;
		}
		longestSequence=0;
		valueGenerator=0;
		for(i=L;i<=H;i++)
		{
			temp=algorithm_given_by_Lothar_Collatz_on_product_sequenes_of_integers(i);
			if(temp>longestSequence)
			{
				longestSequence=temp;
				valueGenerator=i;
			}
		}
		cout<<"Between "<<L<<" and "<<H<<", "<<valueGenerator<<" generates the longest sequence of "<<longestSequence<<" values.\n";
	}
	return 0;
	
}
*/