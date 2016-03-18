#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int d;
	fp=fopen("a.txt","r+");
	fputs("asdfghjkl;'",fp);
	while(d)
	{
		printf("\n\nNumber : ");
		scanf("%d",&d);
		fseek(fp,d,0);
		printf("%c ",getc(fp));		//starting from starting
		fseek(fp,d,1);
		printf("%c ",getc(fp));		//starting from current
		fseek(fp,d,2);
		printf("%c ",getc(fp));		//starting from end
	}
	getch();
	printf("sizeof(int) = %d",sizeof(int));
	return 0;
}