#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int **number,col,row,i,j;
	printf("Please enter the number of collum : ");
	scanf("%d",&col);
	number=(int **)malloc(col*sizeof(int));
	printf("Please enter the number of row : ");
	scanf("%d",&row);
	for(i=0;i<col;i++)
	{
		*(number+i)=(int *)malloc(row*sizeof(int));
	}
	for(i=0;i<col;i++)
		for(j=0;j<row;j++)
			scanf("%d",(*(number+i)+j));
	for(i=0;i<col;i++)
		for(j=0;j<row;j++)
			printf("%d",*(*(number+i)+j));
	return 0;
}