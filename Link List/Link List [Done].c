/*
													A programme for creating link list
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int a;
	struct node* next;
}st;


int main()
{
	st *head;
	st *h;
	int total_number=0,find,position=0;
	head=(st*)malloc(sizeof(st));
	h=head;

	while(1)
	{
		scanf("%d",head->a);//(*head).a
		if(head->a==-1)
		{
			total_number++;
			head->next=(st*)malloc(sizeof(st));
			head->next=NULL;
			break;
		}
		head=head->next;
		head->next=(st*)malloc(sizeof(st));
	}

	head=h;
	while(1)			// Printing
	{
		if(head->a==-1)
			break;
		printf("%d ",head->a);
		head=head->next;
	}

	head=h;											//searching
	printf("Please enter a number to find :");
	scanf("%d",find);
	printf("Position is :  ");
	while(head!=NULL)
	{
		if(head->a==find)
			printf("%d",position);
		position++;
	}

	return 0;
}