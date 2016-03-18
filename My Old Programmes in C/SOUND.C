#include <dos.h>
#include<conio.h>


int main(void)
{
   int i;
   while(!kbhit ())
   {
        clrscr();
        i = rand()% 2000;
        printf("\n\n\tPlease press any key to stop . . . . .\n\n\t\tSound f requency = %d",i);
        sound(i);
        sleep(1);
   }
   printf("\n\n\tStopped . . . . .");
   delay(2500);
   nosound();
   return 0;
}
