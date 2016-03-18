/*
	12289 - One-Two-Three
*/

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[7];
	int T;
	cin>>T;
	while(T--)
	{
		cin>>name;
		if(strlen(name)==5)
			cout<<"3\n";
		else
		{
			int match_counter;
			match_counter=0;
			//for one
			if(name[0]=='o' || name[0]=='O')
				match_counter++;
			if(name[1]=='n' || name[1]=='N')
				match_counter++;
			if(name[2]=='e' || name[2]=='E')
				match_counter++;
			if(match_counter>=2)
				cout<<"1\n";
			else
				cout<<"2\n";
		}
	}
	return 0;
}