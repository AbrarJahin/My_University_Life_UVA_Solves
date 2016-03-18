//////////////////////////////////////////////////////////////////////
//         A programme for making game || tic tac toe ||            //
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<dos.h>

void draw_board(char *a,char *b,char *c,char *d,char *e,char *f,char *g,char *h,char *i,int *p1,int *p2,int *draw);
void assign(char *a,char *b,char *c,char *d,char *e,char *f,char *g,char *h,char *i,int *check,int *n,int *m);
int check_reasult(char *a,char *b,char *c,char *d,char *e,char *f,char *g,char *h,char *i);

int main()
{
	int num,check,n=0,m=0,p1=0,p2=0,draw=0;
	char play,a,b,c,d,e,f,g,h,i;
        clrscr();
        gotoxy(5,12);
        printf("This is Tic Tak Toe game : Created by Piash [ BUET,St.No. - 0905059 ] .\n\n\n\n\n\t\t\tLoading . . . . . . .\n");

        for(num=0;num<80;num++)
        {
                printf("_");
                delay(50);
        }

	again :

           clrscr();

           if(n>3)
           {
                gotoxy(15,17);
	        printf("Do U want to play the game again  :  [y/n]");
           }

           else
           {
                gotoxy(11,17);
                printf("Do U want to play the game  :  [y/n]");
           }
	   play=getch();

           if(play == 'Y' || play == 'y')
           {
                assign(&a,&b,&c,&d,&e,&f,&g,&h,&i,&check,&n,&m);
                n+=2;
                m++;
	        while(n%11 != 0)
                {
                        clrscr();
		        draw_board(&a,&b,&c,&d,&e,&f,&g,&h,&i,&p1,&p2,&draw);
		        printf("\n\n\tPlease enter a valied value between 1-9 :\n\t\t**Valid values are that numbers shown in the board.");

		        if(n%2==0)
		        {
                            	printf("\n\n\n\tPlayer 1[X]'s turn : ");
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
				                 printf("\n\n\tPlayer 1 win........\b\n\n\n");
                                                 p1++;
                                        }
                                        if(check == 2)
                                        {
				                 printf("\n\n\tPlayer 2 win........\r\n\n\n");
                                                 p2++;
                                        }
                                        draw_board(&a,&b,&c,&d,&e,&f,&g,&h,&i,&p1,&p2,&draw);
				        sleep(2);

                                        clrscr();
                                        gotoxy(16,17);
                                        if(check == 1)
                                        {
				                 printf("Player 1 win........\b");
                                        }
                                        if(check == 2)
                                        {
				                 printf("Player 2 win........\r");
                                        }
                                        sleep(2);
                                        goto again;
			        }
		        }

		        else
		        {
			        printf("\n\n\n\tPlayer 2[O]'s turn : ");
			        scanf("%d",&num);

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

			        clrscr();
                                gotoxy(15,15);
				printf("\n\n\n\tPlease enter a valied number . . . . . . . .\a");
				delay(700);
		        }
	        }

                clrscr();
                printf("\n\t\tGame Drawn . . . . . .\n\n\n\n");
                draw++;
                draw_board(&a,&b,&c,&d,&e,&f,&g,&h,&i,&p1,&p2,&draw);
		sleep(2);
                clrscr();
                gotoxy(17,17);
                printf("Game Drawn . . . . . .");
                sleep(2);
		goto again;
           }

	   if(play == 'N' || play == 'n')
	   {
                if(n>3)
                {
		        clrscr();
                        gotoxy(15,15);
                        printf("\n\tPlayer 1 [X] Win(s) = %d .\n\n\tPlayer 2 [O] Win(s) = %d .\n\n\tDraw(s) = %d .\n\n\t",p1,p2,draw);
                        sleep(3);
                        clrscr();
                        gotoxy(15,15);

                        if(p1 != p2)
                        {
                                if(p1 > p2)
                                {
                                        printf("Player 1 is the winner of the series .");
                                }

                                else
                                {
                                        printf("Player 2 is the winner of the series .");
                                }
                        }

                        else
                        {
                                printf("Series Drawn . . . . . .");
                        }
                        printf("\n\n\n\n\n\t\t\tPlease press any key to exit.");
                        getch();
                }
                clrscr();
                gotoxy(25,18);
		printf("Thank u . . . . . . . . . . .");
                delay(800);
                return 0;
	   }

           else
           {
                goto again;
           }
}



void draw_board(char *a,char *b,char *c,char *d,char *e,char *f,char *g,char *h,char *i,int *p1,int *p2,int *draw)
{
        printf("\n\tPlayer 1 is X     //Win = %d .\n\tPlayer 2 is O     //Win = %d .\n\n\t",*p1,*p2);
	gotoxy(0,12);
	printf("     ||     ||\n\t  %c  ||  %c  ||  %c\n\t     ||     ||\n\t-------------------\n\t-------------------\n\t",*a,*b,*c);
	printf("     ||     ||\n\t  %c  ||  %c  ||  %c\n\t     ||     ||\n\t-------------------\n\t-------------------\n\t",*d,*e,*f);
	printf("     ||     ||\n\t  %c  ||  %c  ||  %c\n\t     ||     ||",*g,*h,*i);
        printf("\n\n\tDraw(s) = %d .",*draw);
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