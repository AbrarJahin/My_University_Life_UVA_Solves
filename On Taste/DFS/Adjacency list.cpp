#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#define T 1
#define F 0
#define NULL 0

struct e
{
 int terminal;
 struct e *next;
};
typedef struct e edge;

struct v
{
 int visit;
 int vertex_no;
 char info;
 int path_lenth;
 edge *edge_ptr;
};
typedef struct v vertex;


void table(int,int matrix[SIZE][SIZE],vertex vert[SIZE]);
edge *insert_vertex(int,edge *);
void dfs(int ,int *dist,vertex vert[SIZE]);
void output(int,int a[SIZE][SIZE]);
void input(int,int a[SIZE][SIZE]);

edge *insert_vertex(int vertex_no,edge *first)
{
 edge *new1,*current ;
 new1=(edge*)malloc(sizeof(edge));
 new1->terminal=vertex_no;
 new1->next=NULL;
 if(!first)
   return new1;
 for(current=first;current->next;current=current->next);
 current->next=new1;
 return first;
}

void table(int vertex_num,int matrix[SIZE][SIZE],vertex vert[SIZE])
{
 int i,j;
 for(i=0;i<vertex_num;i++)
 {
  vert[i].visit=F;
  vert[i].vertex_no=i+1;
  vert[i].info='A'+i;
  vert[i].path_lenth=0;
  vert[i].edge_ptr=NULL;
 }
 for(i=0;i<vertex_num;i++)
   for(j=0;j<vertex_num;j++)
    if(matrix[i][j]>0)
     vert[i].edge_ptr=insert_vertex(j,vert[i].edge_ptr);
}

void dfs(int index,int *dist,vertex vert[SIZE])
{
 edge *link;
 vert[index].visit=T;
 vert[index].path_lenth= *dist;
 *dist+=1;
 for(link=vert[index].edge_ptr;link;link=link->next)
  if(vert[link->terminal].visit==F)
   dfs(link->terminal,dist,vert);
}

void input(int number,int a[SIZE][SIZE])
{
 int i,j;
 printf("input the adjacency matrix is:\n");
 for(i=0;i<number;i++)
 {
  for(j=0;j<number;j++)
   scanf("%d",&a[i][j]);
  printf("\n");
 }
}

void output(int number,int a[SIZE][SIZE])
{
 int i,j;
 printf("\n adjacency matrix is:\n");
 for(i=0;i<number;i++)
 {
  for(j=0;j<number;j++)
   printf("%d\t",a[i][j]);
  printf("\n");
 }
}

int main()
{
 int i,number,index,dist,a[SIZE][SIZE];
 vertex vert[SIZE];
 edge *list;
 printf("\ninput the number of vertices in graph:");
 scanf("%d",&number);
 input(number,a);
 output(number,a);
 table(number,a,vert);
 printf("\ninput the strating vertex 0-%d:",number-1);
 scanf("%d",&index);
 dist=0;
 dfs(index,&dist,vert);
 printf("\npath lenth of thevertex %c",vert[index].info);
 printf("\nvertex lenth   vertex complexity\n");
 for(i=0;i<number;i++)
 {
  printf("\n%c\t\t%d",vert[i].info,vert[i].path_lenth);
  for(list=vert[i].edge_ptr;list;list=list->next)
  {
    printf(" ");
    putchar(list->terminal+'A');
  }
 }
 return 0;
}