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
	int i=0,assume_index,big=right,small=left,flag=1;
	assume_index=(right-left)/2;
	while(flag)
	{
		while(element[assume_index]>=element[small])		//step 1
			small++;
		while(element[assume_index]<=element[big])		//step 2
			big--;
		if(element[small]>element[big])						//step 3
		{									//swap
			element[small]+=element[big];
			element[big]=element[small]-element[big];
			element[small]-=element[big];
		}
		if(big<small)						//step 4
			flag=0;
	}
	//swap													//step 5
	element[big]+=element[assume_index];
	element[assume_index]=element[big]-element[assume_index];
	element[big]-=element[assume_index];
	//recursive call										//step 6
	quickshort(element,0,assume_index-1);
	quickshort(element,assume_index+1,right);
}