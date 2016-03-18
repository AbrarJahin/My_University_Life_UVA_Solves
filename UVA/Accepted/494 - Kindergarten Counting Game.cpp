#include<stdio.h>

int main()
{
	unsigned a=1,flag=0;
	char b;
	while((b=getchar())!=EOF)
	{
		if(b==' ')
		{
			a++;
			flag=1;
		}
		else if(b=='\n')
		{
			printf("%u\n",a);
			a=1;
		}
		else if(b=='.')
		{
			flag=1;
		}
		else
			flag=0;
	}
	return 0;
}