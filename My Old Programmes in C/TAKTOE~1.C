// putch  getch   getchar    putcha colour


#include <conio.h>
#include<stdlib.h>

int main(void)
{
   int i;
   clrscr();
   for (i=128; i<266; i++)
   {
       textattr(i);
       cprintf("This is a test\r\n");
   }
   getch();
   return 0;
}

