#include<stdio.h>
#include<conio.h>

#define MAXLINE 500

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

main()
{
	int len;
	extern int max;
	extern longest[MAXLINE];
	
	max=0;
	while((len=getline())>0)
		if(len>max)
		{
			max=len;
			copy();
		}
	if(max>0)
	{
		printf("%s",longest);
	}
	return 0;
}

void copy(void)
{
	int i;
	extern char line[]/*,longest[]*/;
	i=0;
	while((longest[i]=line[i])!='\0')
	{
		++i;
	}
}

int getline(void)
{
	int c,i;
	extern char line[];
	
	for(i=0;i<MAXLINE-1 && (c=getwchar())!=EOF && c!='\n';++i)
	{
		line[i]=c;
		++i;
	}
	line[i]='\0';
	return 0;
}