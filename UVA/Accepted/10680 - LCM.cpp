/*
	UVa 10680 - LCM
*/

#include <stdio.h>
#include <math.h>
#define N 1000001
char primes[N];
int prime[78497];
int multi[N];
int dp[N];
int modPow(int b,int e,int m)
{
	int res = 1;
	while(e)
	{
		if(e&1)
			res = (res * b)%m;
		e>>=1;
		b = (b*b)%m;
	}
	return res;
}
int main()
{
	int top = 0;
	double d;
	int i,j,t,f;
	for( i = 0;i<N;i++)
	{
		primes[i]=1;
		multi[i]=1;
	}
	primes[0]=primes[1]=0;
	for( i  = 2;i*i<N;i++)
		if(primes[i])
			for( j=i*i;j<N;j+=i)
				primes[j]=0;
	prime[top++]=3;
	for( i=7;i<N;i++)
		if(primes[i])
			prime[top++]=i;
	for(i=0;prime[i]<1000;i++)
		for(j=prime[i];j<N;j*=prime[i])
			multi[j]=prime[i];
	for(;i<top;i++)
		multi[prime[i]]=prime[i];
	dp[1]=1;
	for( i = 2;i<N;i++)
		dp[i] = (multi[i]*dp[i-1])%10;
	int n;
	scanf("%d",&n);
	while(n)
	{
		d = log(n);
		t = d/log(2);
		f = d/log(5);
		dp[n]=(dp[n]*(modPow(2,t-f,10)))%10;
		putchar('0'+dp[n]);
		putchar('\n');
		scanf("%d",&n);
	}
	return 0;
}

/*
#include<iostream>
using namespace std;

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

int main()
{
	unsigned long long a,b,result=1;
	while(cin>>a)
	{
		if(a<1)
			break;
		else if(result%a==0)
			cout<<result%10<<endl;
		else
		{
			result=(result/gcd(result,a))*a;
			cout<<result%10<<endl;
		}
	}
	return 0;
}
*/