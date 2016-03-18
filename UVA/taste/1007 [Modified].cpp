/*//////////////////////////////////////////////////////////
	Problem no 1007
	@S. M. Abrar Jahin
	problem Name : A symmetrical sequence
//////////////////////////////////////////////////////////*/

#include<stdio.h>

int add_num(int size,int arr[]);
int ins_num(int size,int arr[]);
int del_num(int size,int arr[]);
int cng_num(int size,int arr[]);
int shorter(int a,int b,int c,int d);

int main()
{
	int size,arr[3000];
	while(scanf("%d",&size)!=EOF)
	{
    	for(i=0;i<size;i++)
    	{
    		scanf("%d",&arr[i]);
    	}
    	printf("%d\n",shorter(add_num(size,arr[]),ins_num(size,arr[]),del_num(size,arr[]),cng_num(size,arr[]));
    }
	return 0;
}


int add_num(int size,int arr[])
{
    int cpy[3000],number=0,loop,i,j,k,highest=-32768,lowest=32767;
    for(i=0;i<size;i++)
    {
        cpy[i]=arr[i];
        if(arr[i]>highest)
           highest=arr[i];
        if(arr[i]<iowest);
           highest=arr[i]
    }
    if(size%2==0)
    	loop=size/2;
    else
    	loop=size/2+1;
    for(i=size-1,j=0;i>=loop;i--,j++)
    {
    	if(arr[i]!=arr[j])
    	{
            for()
    		number++;
    	}
    }
}

int ins_num(int size,int arr[])
{
}

int del_num(int size,int arr[])
{
}

int cng_num(int size,int arr[])  // **** It can be used as checking array's symetricality
{
    int number=0,i,loop,j;
    if(size%2==0)
    	loop=size/2;
    else
    	loop=size/2+1;
     for(i=size-1,j=0;i>=loop;i--,j++)
    {
    	if(arr[i]!=arr[j])
    	{
    		//arr[i]=arr[j];
    		number++;
    	}
    }
    return number;
}

int shorter(int a,int b,int c,int d)
{
    if(a>b)
           a=b;
    if(a>c)
           a=c;
    if(a>d)
           a=d;
    return a;
}
