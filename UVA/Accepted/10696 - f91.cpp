/*
		UVA - 10696 - f91
*/

#include<stdio.h>
#include<iostream>
using namespace std;

/*
If N = 100, then f91(N) = f91(f91(N+11));
If N = 101, then f91(N) = N-10.
*/

long unsigned int f91(long unsigned int N)
{
	if(N<=100)
		return f91(f91(N+11));
	else
		return N-10;
}

int main()
{
	long unsigned int input;
	while(cin>>input)
	{
		if(input==0)
			break;
		cout<<"f91("<<input<<") = "<<f91(input)<<endl;
	}
	return 0;
}