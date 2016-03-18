/*
	UVA 499 - What's The Frequency, Kenneth?
*/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int findMAX(int upperCase[],int lowerCase[])
{
	int max_value=0,i;
	for(i=0;i<26;i++)
	{
		if(lowerCase[i]>max_value)		//for lower case
			max_value=lowerCase[i];
		if(upperCase[i]>max_value)		//for upper case
			max_value=upperCase[i];
	}
	return max_value;
}

int main()
{
	char c;
	int upperCase[26],lowerCase[26],highest;
	memset(upperCase,0,26*sizeof(int));
	memset(lowerCase,0,26*sizeof(int));
	while(c=getchar())
	{
		if(c==-1)
		{
			//cout<<(int)c<<endl;
			break;
		}
		else if(c>='a' && c<='z')		//for lower case
			lowerCase[c-'a']++;
		else if(c>='A' && c<='Z')		//for upper case
			upperCase[c-'A']++;
		else if(c=='\n')
		{
			highest=findMAX(upperCase,lowerCase);
			for(int i=0;i<26;i++)		//for upper case
				if(upperCase[i]==highest)
					cout<<(char)('A'+i);
			for(int i=0;i<26;i++)		//for lower case
				if(lowerCase[i]==highest)
					cout<<(char)('a'+i);
			cout<<" "<<highest<<endl;
			memset(upperCase,0,26*sizeof(int));
			memset(lowerCase,0,26*sizeof(int));
		}
	}
	return 0;
}
