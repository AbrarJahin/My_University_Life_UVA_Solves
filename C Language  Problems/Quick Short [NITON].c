/*
	A programme for quickl short
*/

#include<stdio.h>
#include<conio.h>
#define	max	100

void quickshort(int *element,int left,int right);

int main()
{
	int i=0,left=0,right=0,total_element=0,element[max]={0};
	printf("\n\n\tHow many elements : ");
	scanf("%d",&total_element);
	printf("\n\n\n\tEnter elements :\n\n");
	for(i=0;i<total_element;i++)
	{
		printf("Enter element[%d] : ",i+1);
		scanf("%d",&element[i]);
	}
	right=total_element-1;
	quickshort(element,left,right);
	printf("\n\t\tAfter shorting :\n");
	for(i=0;i<total_element;i++)
	{
		printf("\t%d",element[i]);
	}
	printf("\n\n\t=========================");
	getch();
	return 0;
}

void quickshort(int element[],int left,int right)
{
	int i,j,flag,partition;
	if(right>left)
	{
		i=left;
		j=right;
		partition=element[left];
		flag=0;
	}
	while(!flag)
	{
		do	i++;
			while(element[i]<=partition && i<right);
		while(element[j]>=partition && j>left)
			j--;
		if(j<i)
			flag=1;
		else							//swap
		{
			element[j]=element[j]+element[i];
			element[i]=element[j]-element[i];
			element[j]=element[j]-element[i];
		}
		element[left]+=element[j];			//swap
		element[j]=element[left]-element[j];
		element[left]-=element[j];
		
		quickshort(element,left,j-1);
		quickshort(element,i,right);
	}
	return;
}