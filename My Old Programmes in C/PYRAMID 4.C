//////////////////////////////////////////////////////////////////////
//              A programme for making a pyramid no 4               //
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
        int a,b,c,i,j;
        clrscr();
        printf("How maney lines do u want to print : ");
        scanf("%d",&a);
        clrscr();
        for(i=0;i<a;i++)
        {
                       b=1;
                       for(j=1;j<a-i;j++)
                       {
                                printf("   ");
                       }

                       for(j=0;j<=i;j++)
                       {
                                printf("%3d",b++);
                                delay(50);
                       }

                       c = b-2;
                       for(j=0;j<=i-1;j++)
                       {
                                printf("%3d",c--);
                                delay(50);
                       }
                       printf("\n\n");
                       sleep(1);
        }
        getch();
        return 0;
}