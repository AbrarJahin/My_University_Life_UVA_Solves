/*
	10008 - What's Cryptanalysis?
*/
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

typedef struct tag
{
	char ch;
	long counter;
}chars;
/*
typedef int (*compfn)(const void*, const void*);
int compare(chars *elem1, chars *elem2)
{
   if (elem1->counter < elem2->counter)
      return 1;

   else if (elem1->counter > elem2->counter)
      return -1;

   else
      return 0;
}
*/
int main()
{
	int T,i,highest=0;
	chars input[26];
	char arr[100];
	cin>>T;
	//initialize
	for(char ch='A';ch<='Z';ch++)
	{
		input[ch-'A'].ch=ch;
		input[ch-'A'].counter=0;
	}
	getchar();
	while(T--)
	{
		int len;
		/*char c='0';
		//cin>>arr;
		while(c!='\n')
			c=getchar();				//for safety reson
		c='0';*/
		gets(arr);				//for string input
		len=strlen(arr);
		for(i=0;i<len;i++)
		{
			if(arr[i]>='A' && arr[i]<='Z')
				input[arr[i]-'A'].counter++;
			else if(arr[i]>='a' && arr[i]<='z')
				input[arr[i]-'a'].counter++;
		}
	}
	/*
	//qshort the structure array
	qsort((void *)	&input,				// Beginning address of array
					26,					// Number of elements in array
					sizeof(chars),		// Size of each element
					(compfn)compare );	// Pointer to compare function
	//output
	*/
	//no shorting needed, find highest number, then print start=>that number and end 1

	for(i=0;i<26;i++)
		if(input[i].counter>highest)
			highest=input[i].counter;
	for(i=highest;i>0;i--)
		for(int j=0;j<26;j++)
			if(input[j].counter==i)
				cout<<input[j].ch<<" "<<input[j].counter<<endl;
	return 0;
}