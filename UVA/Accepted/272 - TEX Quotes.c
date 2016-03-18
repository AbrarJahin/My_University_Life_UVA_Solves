/*//////////////////////////////////////////////////////////////////////////////
			A programme for Solving ACM 272
//////////////////////////////////////////////////////////////////////////////*/

#include<stdio.h>

int main()
{
	char string[200];
	int i;

	while(gets(string)!=EOF)
	{
		i=0;
		while(string[i]!=NULL)
		{
			if(string[i]=='"')
				printf("''");
			else
				printf("%c",string[i]);
			i++;
		}
	}
	return 0;
}