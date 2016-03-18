/*
	UVa 12068 - Harmonic Mean
*/


#include <stdio.h>
int cc = 1;
typedef struct rational
{
	unsigned long long int n,d;
}fraction;
int gcd(unsigned long long int a,unsigned long long int b)
{
	unsigned long long int t;
	while(b)
	{
		t = b;
		b = a%b;
		a = t;
	}
	return a;
}
void simplify(fraction* f)
{
	int g = gcd(f->d,f->n);
	f->d/=g;
	f->n/=g;
}
fraction add(fraction*a,fraction*b)
{
	fraction res;
	res.n = a->n * b->d + a->d * b->n;
	res.d = a->d * b->d;
	simplify(&res);
	return res;
}
fraction divide(fraction*a,fraction*b)
{
	fraction res;
	res.n = a->n * b->d;
	res.d = a->d * b->n;
	simplify(&res);
	return res;
}
void print(fraction* f)
{
	printf("Case %d: %llu/%llu\n",cc++,f->n,f->d);
}
int main()
{
	int c,i;
	scanf("%d",&c);
	while(c--)
	{
		fraction o;
		scanf("%llu",&o.n);
		o.d = 1;
		fraction sum;
		sum.n = 0;
		sum.d = 1;
		for(i=0;i<o.n;i++)
		{
			fraction c;
			c.n = 1;
			scanf("%llu",&c.d);
			sum = add(&sum,&c);
		}
		fraction p = divide(&o,&sum);
		print(&p);
	}
	return 0;
}


/*#include<iostream>
using namespace std;

typedef struct tag
{
	long upper,lower;
}fruction;

int GCD(fruction a)
{
	int temp;
	while(a.upper%a.lower!=0)
	{
		temp=a.upper%a.lower;//=>lower
		a.upper=a.lower;
		a.lower=temp;
	}
	return a.lower;
}

fruction add (fruction a, fruction b)
{
	fruction result;
	result.upper=a.upper*b.lower + b.upper*a.lower;
	result.lower=a.lower*b.lower;
	int gcd=GCD(result);
	result.upper/=gcd;
	result.lower/=gcd;
	return result;
}

fruction devide (int a, fruction b)
{
	fruction result;
	result.upper=a*b.lower;
	result.lower=b.upper;
	return result;
}

int main()
{
	int sets_of_input,N;
	fruction input,result;
	cin>>sets_of_input;
	for(int j=1;j<=sets_of_input;j++)
	{
		result.lower=1;
		result.upper=0;
		cin>>N;
		for(int i=0;i<N;i++)
		{
			cin>>input.lower;
			input.upper=1;
			result=add(result,input);
		}
		result=devide(N,result);
		cout<<"Case "<<j<<": "<<result.upper<<"/"<<result.lower<<endl;
	}
	return 0;
}*/