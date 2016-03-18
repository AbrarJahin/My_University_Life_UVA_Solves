/*
	UVA - 10499 - The Land of Justice
*/

#include<iostream>
using namespace std;

int main()
{
	long long int a=8;
	while(cin>>a && a>-1)
		if(a>1)
			cout<<a*25<<"%"<<endl;
		else
			cout<<0<<"%"<<endl;
	return 0;
}