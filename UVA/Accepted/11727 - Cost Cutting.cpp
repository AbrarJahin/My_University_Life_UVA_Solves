#include<iostream>
using namespace std;
long unsigned exist(long unsigned i,long unsigned j,long unsigned k)
{
	if( (i>j && i<k) || (i<j && i>k) )
		return i;
	else if( (j>i && j<k) || (j<i && j>k) )
		return j;
	return k;
}

int main()
{
	unsigned T;
	cin>>T;
	for(unsigned l=1;l<=T;l++)
	{
		long unsigned i,j,k;
		cin>>i>>j>>k;
		cout<<"Case "<<l<<": "<<exist(i,j,k)<<endl;
	}
	return 0;
}