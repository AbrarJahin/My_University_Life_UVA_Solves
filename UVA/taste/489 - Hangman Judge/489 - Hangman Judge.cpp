/*///////////////////////////////////////////////////////////////////
	UVa 489 - Hangman Judge
///////////////////////////////////////////////////////////////////*/
#include<iostream>
#define MAX 100
using namespace std;

int compare (const void * a, const void * b)				// for small to large number
{
	return ( *(char*)a - *(char*)b );
}

int main()
{
	int round,i,ans_len,total_wrong_answer;
	char answer[MAX],guess[MAX];
	while(cin>>round)
	{
		if(round==-1)
			break;
		cin>>answer>>guess;
		ans_len=strlen(answer);
		qsort (answer,ans_len,sizeof(char), compare);
		i=-1;
		total_wrong_answer=0;
		while(guess[++i])
		{
			
		}
	}
	return 0;
}