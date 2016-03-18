//////////////////////////////////////////////////////////////////////
//            A programme for making game || Sodoku ||              //
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"iGraphics.h"



int main()
{
	char difficulty;
	int board[9][9],defined[9][9],i,j,k;
	iInitialize(600,1100,"Sodoku Game by PIASH");
	printf("Do u want to play the Game ? [y \\ n]");
	difficulty = getch();
	while(1)
	{
		while(difficulty != 'y' && difficulty != 'Y' && difficulty != 'n' && difficulty != 'N')
		{
			printf("\n\tPlease enter a right key .\n\n\t\tDo u want to play the Game ? [y \\ n]");
			difficulty = getch();
		}
		if(difficulty != 'n' || difficulty != 'N')
		{
			printf("\n\n\tThank U .");
			break;
		}

		printf("\n\n\tPlease Choose difficulty .\n\t\tpress 1 for play easy mode .\n\t\tPress 2 for play normal mode .\n\t\tPress 3 for play difficult mode .");
		difficulty = getch();
		while(difficulty != '1' && difficulty != '2'  && difficulty != '3'  && difficulty != '4')
		{
			printf("\n\n\tPlease enter a right key .\n\n\tPlease Choose difficulty .\n\t\tpress 1 for play easy mode .\n\t\tPress 2 for play normal mode .\n\t\tPress 3 for play difficult mode .");
			difficulty = getch();
		}

		if(difficulty == '1')
		{
			assign(&board[],&defined[],(60 + random(10));		// * * Look at hare .......
		}
		else if(difficulty == '2')
		{
			assign(&board[],&defined[],(40 + random(15));
		}
		else if(difficulty == '3')
		{
			assign(&board[],&defined[],(20 + random(15));
		}
		else
		{
			assign(&board[],&defined[],79);
		}
		
		while(check_reasult(&board[]) == 0)
		{
			draw_board(&board[]);
			printf("\n\n\tPlease enter no. of the block : ");
			scanf("%d",&i);
			printf("\n\n\tPlease enter position no. : ");
			scanf("%d",&j);

			if( defined[i-1][j-1] == 0 )
			{
				printf("\n\n\tPlease enter your desired no. : ");
				scanf("%d",&k);

				if(k>9)
				{
					printf("\n\n\tPlease enter a number between 1-9 .");
				}
				else
				{
					board[i-1][j-1] = k;
				}
			}

			else
			{
				printf("\n\n\tYour choosen position is pre-defined .\n\t\tPlese choose a right position .");
			}
		}
	}
	return 0;
}


void draw_board(int *board[])
{
	iClear();
	iSetColour(80.54,25.789,45.78);
	iLine("100.0,100.0,100.0,1000.0");
	iLine("150.0,100.0,150.0,1000.0");
}


void assign(int *board[],int *defined[],int difficult)
{
	int i,j,k,l=0;

	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			*board[i-1][j-1] = 0;
			*defined[i-1][j-1] = 0;
		}
	}

	while( l != difficult )
	{
		i = random(9)+1;
		j = random(9)+1;

		if(*board[i-1][j-1] == 0)
		{
			while(1)
			{
				k = random(9)+1;
				if(check(&*board[],&i,&j,&k) == 1)
				{
					*board[i-1][j-1] = k;
					*defined[i-1][j-1] = k;
					l++;
					break;
				}
			}
		}
	}
}


int check(int **board[],int *i,int *j,int *k)
{
	int l,m;
	for(l=1;l<10;l++)
	{
		if(**board[*i-1][l-1] == *k)
		{
			return 0;
		}
	}

	for(l=0;l<3;l++)
	{
		for(m=0;m<3;m++)
		{
			if(**board[*i-*i%3+l][*j-*j%3+m] == *k)
			{
				return 0;
			}

			if(**board[(*i-1)%3+l*3][(*j-1)%3+m*3] == *k)
			{
				return 0;
			}
		}
	}
	return 1;
}


int check_reasult(int &board[])
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			if(check(&*board[],&i,&j,&*board[i-1][j-1]) == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}