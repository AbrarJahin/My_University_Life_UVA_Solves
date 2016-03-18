/*
	10079 – Pizza Cutting
*/

#include <iostream>
using namespace std;

int main()
{
	long int n;
	while(cin>>n)
	{
		if(n<0)
			break;
		cout<<((n*(n+1))/2)+1<<endl;
	}
	return 0;
}