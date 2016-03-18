#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include<stdlib.h>

int main(void)
{
        int a=0,b=0;
        float c=0.0;
	time_t first, second;
	clrscr();
	printf("Please enter any key to start the watch . . . . . .");
	getch();
        first = time(NULL);

	while(!kbhit())
	{
		clrscr();
                if(a%50==0)
                {
		        textattr(rand()%1000);
                }
		gotoxy(14,14);
		second = time(NULL);
                a++;
                c = difftime(second,first);
                b = (int) c;
                if(a==100)
                {
                        a=0;
                }
                if(a>9)
                {
		        printf("Time : %d.%d seconds\n\n\n\t\tPlease press any key to stop the watch .",b,a);
                }
                else
                {
                        printf("Time : %d.0%d seconds\n\n\n\t\tPlease press any key to stop the watch .",b,a);
                }
		delay(10);
	}
	clrscr();
	gotoxy(14,14);
	cprintf("The time is : %d.%d seconds .",b,a);
	getch();
	getch();
	return 0;
}