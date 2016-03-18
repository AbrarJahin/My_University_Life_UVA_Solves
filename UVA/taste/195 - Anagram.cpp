/*
	UVa 195 - Anagram
*/

#include<iostream>
#include<cstring>
#define MAX 1000
using namespace std;

int compare (const void * a, const void * b)				// for small to large number
{
	return ( *(char*)a - *(char*)b );
}

void output(char arr[])
{
	char temp[MAX];
	int stringLength=strlen(arr);
	strcpy(temp,arr);
	qsort(temp,stringLength,sizeof(char),compare);		//shorted
	
}

int main()
{
	int T;
	char arr[MAX];
	cin>>T;
	while(T--)
	{
		cin>>arr;
		output(arr);
	}
	return 0;
}