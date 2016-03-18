/*
	575 - Skew Binary
*/

#include<stdio.h>
#include<math.h>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int len,i;
	long unsigned int output;
	char num[100];
	while(cin>>num)
	{
		if(!strcmp("0",num))
			break;
		output=0;
		len=strlen(num);
		for(i=len-1;i>-1;i--)
		{
			if(num[i]>'0')
				output+=(long unsigned int)(num[i]-'0')*((long unsigned int)pow(2,len-i)-1);
		}
		cout<<output<<endl;
	}
	return 0;
}