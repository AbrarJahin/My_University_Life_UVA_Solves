/*
	10783 - Odd Sum
*/

#include<iostream>
using namespace std;

long sum(long start,long end)
{
	long add=0;
	if(start%2)
		add=start;
	return ((end+1)/2)*((end+1)/2)-((start+1)/2)*((start+1)/2)+add;
}

int main()
{
	unsigned T;
	long start,end;
	cin>>T;
	T++;
	for(int i=1;i<T;i++)
	{
		cin>>start>>end;
		cout<<"Case "<<i<<": "<<sum(start,end)<<endl;
	}
}