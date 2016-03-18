#include <time.h>
#include <stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

void main(void)
{
	char datebuf[9];
	char timebuf[9];
	while(!kbhit())
	{
		clrscr();
		textattr(rand()%1000);
		_strdate(datebuf);
		_strtime(timebuf);
		printf("\n\nThis clock is created by Piash .\n\n\n\n\n\n\tDate : %s\n\n\tTime : %s",datebuf,timebuf);
		gotoxy(15,20);
		cprintf("Please press any key to exit the programme .");
		delay(100);
	}
}