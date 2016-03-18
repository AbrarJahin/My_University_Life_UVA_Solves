/*
	UVA 729 - The Hamming Distance Problem
*/

#include<iostream>
#include <stdio.h>
using namespace std;


int countBits(int n)
{
	int count = 0;
	while(n>0)
	{
		count+=(n&1);
		n>>=1;
	}
	return count;
}

int main()
{
	int T,N,H,max,i,j;		//strings of length N that are Hamming distance H
	cin>>T;					//T = taste cases
	while(T--)
	{
		cin>>N>>H;
		max=1<<N;
		for(i=0;i<max;i++)
			if(countBits(i)==H)	//for checking number if it has proper no. of 1's
			{
				for(j=N-1;j>=0;j--)	//for printing bits including appropiate number of zeros
					cout<<!(!((1<<j)&i));
				cout<<endl;
			}
		if(T)
			cout<<endl;
	}
	return 0;
}