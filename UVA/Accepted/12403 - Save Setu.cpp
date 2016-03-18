/*
	12403 - Save Setu
*/

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	long unsigned int TotalMoney=0;
	char command[7];
	int T;
	cin>>T;
	while(T--)
	{
		cin>>command;
		if(!strcmp("donate",command))
		{
			long unsigned int temp;
			cin>>temp;
			TotalMoney+=temp;
		}
		else
			cout<<TotalMoney<<endl;
	}
	return 0;
}