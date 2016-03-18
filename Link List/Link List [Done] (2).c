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


void prnt(st *head)
{
   while(1)			// Printing
	{
		if(head==NULL||head->a==-1)
			break;


		printf("%d ",head->a);
		
		head=head->next;
	}

   printf("\n");

}


int main()
{
	st *head,*head2;
	st *h;
	int total_number=0,find,position=0;
	head=(st*)malloc(sizeof(st));
	head2 = (st*)malloc(sizeof(st));
	h = (st*)malloc(sizeof(st));
	h=head;


	while(1)
	{
		scanf("%d",&(head->a));//(*head).a
		if(head->a==-1)
		{
			total_number++;
			head->next=(st*)malloc(sizeof(st));
			head->next=NULL;
			break;
		}
		
		head->next=(st*)malloc(sizeof(st));
		head=head->next;
		head->next = NULL;
		head->a = -1;
        
		head2=h;
        prnt(head2);
		
	}


	head=h;											//searching
	printf("Please enter a number to find :");
	scanf("%d",&find);
	printf("Position is :  ");
	

	while(head!=NULL)
	{
		if(head->a==find)
			printf("%d",position);
        head = head->next;

		position++;
	}

	return 0;
}