/*
	UVA 382 - Perfection
*/

#include<iostream>
#include<cstdio>
using namespace std;

long find_sum(long num) 
{
	long sum=0,i,end=num/2+1;
	for(i=1;i<end;i++)
		if(!(num%i))
			sum+=i;
	return sum;
}

void perfection(long num)
{
	long sum=find_sum(num);
	printf("%5d  ",num);
	if(num==sum)
		cout<<"PERFECT\n";
	else if(num>sum)
		cout<<"DEFICIENT\n";
	else
		cout<<"ABUNDANT\n";
}

int main()
{
	long num;
	cout<<"PERFECTION OUTPUT\n";
	while(cin>>num && num)
		perfection(num);
	cout<<"END OF OUTPUT\n";
	return 0;
}