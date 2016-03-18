/*
	UVA 11185 - Ternary
*/

#include<iostream>
#include<cstdio>
using namespace std;

void toTernary(long long int num)
{
	if(num)
	{
		toTernary(num/3);
		cout<<num%3+0;
	}
}

int main()
{
	long long int num;
	while(cin>>num && num>-1)
	{
		if(num)
			toTernary(num);
		else
			cout<<0;
		cout<<endl;
	}
	return 0;
}