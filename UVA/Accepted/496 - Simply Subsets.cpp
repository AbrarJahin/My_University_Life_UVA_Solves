/*
	UVA 496 - Simply Subsets
*/


#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
#define MAX 1000

int main()
{
	char s[MAX],s1[MAX],*p;
	int i,j,k,l,m,n,count,a[MAX],a1[MAX];

    while(gets(s))
	{
		gets(s1);
		i = 0,j = 0;
		p = strtok(s," ");
		a[i++] = atoi(p);				// atoi =>> Interprets an integer value in a byte string pointed to by string
		while(p)
		{
		    p = strtok(NULL," ");
		    if(p == NULL)
		        break;
		    a[i++] = atoi(p);
		}
		p = strtok(s1," ");
		a1[j++] = atoi(p);
		while(p)
		{
		    p = strtok(NULL," ");
		    if(p == NULL)
		        break;
		    a1[j++] = atoi(p);
  		}
		count = 0;
		for(m = 0 ;m < i;m++)
		{
		    for(n = 0 ; n < j;n++)
			{
				if(a[m] == a1[n])
				{
					a1[n] = -1;	//cause no negetive value is alloud to give as input
					count++;
				}
			}
    	}
		if(count == i && count == j)			//count = total same value, i= num of numbers A, j= num of numbers B
			printf("A equals B\n");
		else if( (i < j) && count == i)
			printf("A is a proper subset of B\n");
		else if( (i > j) && count == j)
			printf("B is a proper subset of A\n");
		else if(count == 0)
			printf("A and B are disjoint\n");
		else
			printf("I'm confused!\n");
	}
	return 0;
}



/*
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char sa[10000],sb[10000];
	for(;;)
	{
		if(gets(sa)==NULL || gets(sb)==NULL)
			break;
		int lastwasdigit=0,na=0,nb=0,nchr=0;
		long a[1000],b[1000],nsa=0,nsb=0;
		char chr[10];
		nsa=strlen(sa)+1;
		nsb=strlen(sb)+1;
		for(int i=0;i<nsa;i++)
		{
			if(isdigit(sa[i]))
			{
				chr[nchr]=sa[i];
				nchr++;
				lastwasdigit=1;
		 	}
			else
		 	{
				if(lastwasdigit)
			 	{
					chr[nchr]='\0';
					nchr++;
					a[na]=atol(chr);
					na++;
					nchr=0;
					lastwasdigit=0;
	  			}
				else
					lastwasdigit=0;
			 }
		}
		for(int j=0;j<nsb;j++)
		{
			if(isdigit(sb[j]))
		 	{
				chr[nchr]=sb[j];
				nchr++;
				lastwasdigit=1;
		 	}
			else
		 	{
				if(lastwasdigit)
			 	{
					chr[nchr]='\0';
					nchr++;
					b[nb]=atol(chr);
					nb++;
					nchr=0;
					lastwasdigit=0;
			 	}
				else
					lastwasdigit=0;
		 	}
		}
		int xna=na,xnb=nb;
		for(int u=0;u<na;u++)
		{
			for(int v=0;v<nb;v++)
				if(a[u]==b[v])
			 	{
					xna--;
					xnb--;
					break;
			 	}
		}
		if(xna==0 && xnb==0)
			printf("A equals B\n");
		else if(xna>0 && xnb==0)
			printf("B is a proper subset of A\n");
		else if(xna==0 && xnb>0)
			printf("A is a proper subset of B\n");
		else if(xna==na && xnb==nb)
			printf("A and B are disjoint\n");
		else
			printf("I'm confused!\n");
	}
	return 0;
}
*/