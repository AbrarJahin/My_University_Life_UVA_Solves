/*
	11172 - Relational Operator
*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	long int a,b,T;
	cin>>T;
	while(T--)
	{
		cin>>a>>b;
		if(a==b)
			cout<<"=\n";
		else if(a<b)
			cout<<"<\n";
		else
			cout<<">\n";
	}
	return 0;
}