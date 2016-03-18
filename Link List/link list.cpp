#include<stdio.h>
#include<stdlib.h>

int main()
{  
  
		struct node
		{
			int x;
			struct node *next;
			struct node *prev;
		};

		int choose,a;
		struct node *p;
		struct node *temp,*r;
		p=NULL;
  



		while(1)
		{
					printf("1.costruct\n2.insert\n3.delete\n4.sort\n5.show\n6.exit\n\n");
	 				printf("enter choice:");
					scanf("%d",&choose);
///////////////////////////////////
					if(choose==1)             //construct
					{ 
								scanf("%d",&a);
								if(p==NULL)
								{
										temp=(node *)malloc(sizeof(struct node));
										temp->x=a;
										temp->next=NULL;
										p=temp;
								}
								else
								{  
										temp=p;
										while(temp->next!=NULL)
												temp=temp->next;

										r=(node *)malloc(sizeof(struct node));
										r->x=a;
										r->next=NULL;
										temp->next=r;
										r->prev=temp;
								}
					}
///////////////////////////////
					else if(choose==2)           //insert
					{   
								printf("after whice location you want to insert:");
								scanf("%d",&a);
								printf("number to be insert:");
								int xx;
								scanf("%d",&xx);
								temp=p;

								for(int i=1;i<a;i++)
								{
										temp=temp->next;
										if(temp==NULL)
										{
													printf("there are less element\n");
													break;
										}
								}

								if(temp!=NULL)
								{    
										r=(node *)malloc(sizeof(struct node));
										r->x=xx;
										r->next=temp->next;
										temp->next=r;
										r->prev=temp;
								}
		 
					}
/////////////////////////////////
					else if(choose==3)           //delete
					{   
								printf("whice node you want to delete:");
								scanf("%d",&a);
								temp=p;

								while(temp!=NULL)
								{ 
										if(temp->x==a)
										{
														if(temp==p)
														{
																	p=temp->next;
																	free(temp);
																	break;
														}
														else
														{
																	(temp->prev)->next=temp->next;
																	free(temp);
																	break;
														}
										}

										temp=temp->next;
								}
					}
/////////////////////////////////
					else if(choose==4)   //sort
					{
					}
///////////////////////////////////////
					else if(choose==5)         //show
					{   
								printf("\n");
								temp=p;
	   
								while(temp!=NULL)
								{ 
										printf("%d\n",temp->x);
										temp=temp->next;
								}
		 
					}

					else if(choose==6)
								break;
					else printf("\nEnter correct choice:\n");


   
		}

		return 0;



}