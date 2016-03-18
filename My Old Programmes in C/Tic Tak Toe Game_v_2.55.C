//////////////////////////////////////////////////////////////////////
//         A programme for making game || tic tac toe ||            //
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>

void draw_board(char *a,char *b,char *c,char *d,char *e,char *f,char *g,char *h,char *i,int *p1,int *p2,int *draw,char **n1,char **n2);
void assign(char *a,char *b,char *c,char *d,char *e,char *f,char *g,char *h,char *i,int *check,int *n,int *m);
int check_reasult(char *a,char *b,char *c,char *d,char *e,char *f,char *g,char *h,char *i);

int main()
{
	int num,check,n=0,m=0,p1=0,p2=0,draw=0;
	char *n1,*n2,play,start,a,b,c,d,e,f,g,h,i,datebuf[10],timebuf[10];
	clock_t first,end;
	first = clock();
	_strdate(datebuf);
	_strtime(timebuf);
	clrscr();
	gotoxy(5,12);
	textattr(rand()%3000);
	cprintf("This is Tic Tak Toe game : Created by Piash [ BUET,St.No. - 0905059 ] .");
	printf("\n\n\n\n\n\t\t\t");
	textattr(rand()%3000);
	cprintf("Loading");
	for(num=0;num<7;num++)
	{
		printf(" .");
		delay(300);
	}
	printf("\n");

	for(num=0;num<80;num++)
	{
		textattr(rand()%3000);
		cprintf("#");
		delay(50);
	}

     ret :
	gotoxy(17,14);
	textattr(rand()%3000);
	printf("\t\tDate: %s .\n\t\t\t\tTime: %s .\n\n\t\t",datebuf,timebuf);
	textattr(rand()%3000);
	cprintf("Do U want to play the game :  [y/n]");
	play=getch();
	if(play == 'Y' || play == 'y' || play == 'N' || play == 'n')
	{
		if(play == 'Y' || play == 'y')
		{
		    start :
			clrscr();
			gotoxy(5,20);
			textattr(rand()%3000);
			cprintf("Please choose a option :");
			printf("\n\n\t");
			textattr(rand()%3000);
			cprintf("Press 1 for play Human vs. Computer .");
			textattr(rand()%3000);
			printf("\n\t");
			cprintf("Press 2 for play Human vs. Human .");
			start=getch();
			if(start !='1' && start !='2')
			{
				goto start;
			}
			clrscr();
			gotoxy(15,16);

			if(start == '2')
			{
				textattr(rand()%3000);
				cprintf("Please enter player 1's name : ");
				gets(n1);
				printf("\n\n\t\t");
				textattr(rand()%3000);
				cprintf("Please enter player 2's name : ");
				gets(n2);
			}

			else
			{
				textattr(rand()%3000);
				cprintf("Please enter your name : ");
				gets(n1);
				n2 = "Computer";
			}
		}

		else
		{
			goto end;
		}
	}

	else
	{
		goto ret;
	}

	again :

	   clrscr();

	   if(n>3)
	   {
		gotoxy(15,17);
		textattr(rand()%3000);
		cprintf("Do U want to play the game again  :  [y/n]");
		play=getch();
	   }

	   if(play == 'Y' || play == 'y')
	   {
		assign(&a,&b,&c,&d,&e,&f,&g,&h,&i,&check,&n,&m);
		n+=2;
		m++;
		while(n%11 != 0)
		{
			clrscr();
			draw_board(&a,&b,&c,&d,&e,&f,&g,&h,&i,&p1,&p2,&draw,&n1,&n2);
			printf("\n\n\tPlease enter a valied value between 1-9 :\n\t\t**Valid values are that numbers shown in the board.");

			if(n%2==0)
			{
				printf("\n\n\n\t");
				textattr(rand()%128);
				cprintf("%s 's turn [X] : ",n1);
				scanf("%d",&num);

				if(num==1 && a!='X' && a!='O')
				{
					a='X';
					n++;
					goto valied;
				}

				if(num==2 && b!='X' && b!='O')
				{
					b='X';
					n++;
					goto valied;
				}

				if(num==3 && c!='X' && c!='O')
				{
					c='X';
					n++;
					goto valied;
				}

				if(num==4 && d!='X' && d!='O')
				{
					d='X';
					n++;
					goto valied;
				}

				if(num==5 && e!='X' && e!='O')
				{
					e='X';
					n++;
					goto valied;
				}

				if(num==6 && f!='X' && f!='O')
				{
					f='X';
					n++;
					goto valied;
				}

				if(num==7 && g!='X' && g!='O')
				{
					g='X';
					n++;
					goto valied;
				}

				if(num==8 && h!='X' && h!='O')
				{
					h='X';
					n++;
					goto valied;
				}

				if(num==9 && i!='X' && i!='O')
				{
					i='X';
					n++;
					goto valied;
				}

				clrscr();
				gotoxy(15,15);
				printf("\n\n\n\tPlease enter a valied number . . . . . . . .\a");
				delay(500);

			valied :
				check=check_reasult(&a,&b,&c,&d,&e,&f,&g,&h,&i);
				if(check == 1 || check == 2)
				{
					clrscr();
					if(check == 1)
					{
						 printf("\n\n\t");
						 textattr(rand()%3000);
						 cprintf("%s win........",n1);
						 printf("\r\n\n\n");
						 p1++;
					}
					else
					{
						 printf("\n\n\t");
						 textattr(rand()%3000);
						 cprintf("%s win........",n2);
						 printf("\r\n\n\n");
						 p2++;
					}
					draw_board(&a,&b,&c,&d,&e,&f,&g,&h,&i,&p1,&p2,&draw,&n1,&n2);
					sleep(3);

					clrscr();
					gotoxy(16,17);
					if(check == 1)
					{
						 textattr(rand()%3000);
						 cprintf("%s win........\b",n1);
					}
					if(check == 2)
					{
						 textattr(rand()%3000);
						 cprintf("%s win........\r",n2);
					}
					sleep(2);
					goto again;
				}
			}

			else
			{
				if(start == '2')
				{
					printf("\n\n\n\t");
					textattr(rand()%128);
					cprintf("%s 's turn [O] : ",n2);
					scanf("%d",&num);
				}

				else
				{
					printf("\n\n\n\t");
					textattr(rand()%128);
					cprintf("Computer is thinking . . . . .");
					num = rand() % 11;
				}

				if(num==1 && a!='X' && a!='O')
				{
					a='O';
					n++;
					goto valied;
				}

				if(num==2 && b!='X' && b!='O')
				{
					b='O';
					n++;
					goto valied;
				}

				if(num==3 && c!='X' && c!='O')
				{
					c='O';
					n++;
					goto valied;
				}

				if(num==4 && d!='X' && d!='O')
				{
					d='O';
					n++;
					goto valied;
				}

				if(num==5 && e!='X' && e!='O')
				{
					e='O';
					n++;
					goto valied;
				}

				if(num==6 && f!='X' && f!='O')
				{
					f='O';
					n++;
					goto valied;
				}

				if(num==7 && g!='X' && g!='O')
				{
					g='O';
					n++;
					goto valied;
				}

				if(num==8 && h!='X' && h!='O')
				{
					h='O';
					n++;
					goto valied;
				}

				if(num==9 && i!='X' && i!='O')
				{
					i='O';
					n++;
					goto valied;
				}

				if(start == '2')
				{
					clrscr();
					gotoxy(15,15);
					printf("\n\n\n\tPlease enter a valied number . . . . . . . .\a");
					delay(700);
				}

				else
				{
					delay(500);
				}
			}
		}

		clrscr();
		printf("\n\t\t");
		textattr(rand()%3000);
		cprintf("Game Drawn . . . . . .");
		draw++;
		draw_board(&a,&b,&c,&d,&e,&f,&g,&h,&i,&p1,&p2,&draw,&n1,&n2);
		sleep(2);
		clrscr();
		gotoxy(17,17);
		textattr(rand()%3000);
		cprintf("Game Drawn . . . . . .");
		sleep(2);
		goto again;
	   }

	end :
	   if(play == 'N' || play == 'n')
	   {
		if(n>3)
		{
			clrscr();
			gotoxy(15,15);
			printf("\n\t");
			textattr(rand()%3000);
			cprintf("%s [X] Win(s) =",n1);
			textattr(rand()%3000);
			cprintf(" %d .",p1);
			printf("\n\n\t");
			textattr(rand()%3000);
			cprintf("%s [O] Win(s) =",n2);
			textattr(rand()%3000);
			cprintf(" %d .",p2);
			printf("\n\n\t");
			textattr(rand()%3000);
			cprintf("Draw(s) =");
			textattr(rand()%3000);
			cprintf(" %d .",draw);
			sleep(3);
			clrscr();
			gotoxy(15,15);

			if(p1 != p2)
			{
				if(p1 > p2)
				{
					textattr(rand()%3000);
					cprintf("%s is the winner of the Game .",n1);
				}

				else
				{
					textattr(rand()%3000);
					cprintf("%s is the winner of the Game .",n2);
				}
			}

			else
			{
				textattr(rand()%3000);
				cprintf("Game Drawn . . . . . .");
			}
			end = clock();
			printf("\n\n\t\t\t");
			textattr(rand()%3000);
			cprintf("You have played the game for : %f seconds .\n", (end - first) / CLK_TCK);
			printf("\n\n\n\t\t\t");
			textattr(rand()%3000);
			cprintf("Please press any key to exit.");
			_strdate(datebuf);
			_strtime(timebuf);
			printf("\n\n\t\tDate: %s .\n\t\tTime: %s .",datebuf,timebuf);
			getch();
		}
		clrscr();
		gotoxy(25,18);
		textattr(rand()%3000);
		cprintf("Thank u");
		for(num=0;num<10;num++)
		{
			printf(" .");
			delay(300);
		}
		return 0;
	   }

	   else
	   {
		goto again;
	   }
}



void draw_board(char *a,char *b,char *c,char *d,char *e,char *f,char *g,char *h,char *i,int *p1,int *p2,int *draw,char **n1,char **n2)
{
	printf("\n\t%s is X     //Win = %d .\n\t%s is O     //Win = %d .\n\n\tDraw(s) = %d .\n\n\t",*n1,*p1,*n2,*p2,*draw);
	gotoxy(0,12);
	printf("     #     #\n\t  %c  #  %c  #  %c\n\t     #     #\n\t#################\n\t",*a,*b,*c);
	printf("     #     #\n\t  %c  #  %c  #  %c\n\t     #     #\n\t#################\n\t",*d,*e,*f);
	printf("     #     #\n\t  %c  #  %c  #  %c\n\t     #     #",*g,*h,*i);
}


void assign(char *a,char *b,char *c,char *d,char *e,char *f,char *g,char *h,char *i,int *check,int *n,int *m)
{
	*a='1';
	*b='2';
	*c='3';
	*d='4';
	*e='5';
	*f='6';
	*g='7';
	*h='8';
	*i='9';
	*check=0;
	*n = 11 * *m;
}


int check_reasult(char *a,char *b,char *c,char *d,char *e,char *f,char *g,char *h,char *i)
{
	if(*a==*e && *e==*i || *c==*e && *e==*g || *d==*e && *e==*f || *b==*e && *e==*h)
	{
		if(*e=='X')
		{
                        return 1;
		}
		else
                {
			return 2;
                }
	}

	if(*a==*b && *b==*c || *a==*d && *d==*g)
	{
		if(*a=='X')
		{
                        return 1;
		}
		else
                {
			return 2;
                }
	}

	if(*i==*f && *f==*c || *i==*h && *h==*g)
	{
		if(*a=='X')
		{
                        return 1;
		}
		else
                {
			return 2;
                }
	}

        else
              return 0;
}