//////////////////////////////////////////////////////////////////////
//              A programme for making a pyramid no 5               //
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
        int  a,b,i,j;
        clrscr();
        printf("How maney lines do u want to print : ");
        scanf("%d",&a);
        clrscr();
        for(i=0;i<a;i++)
        {
                for(j=0;j<a-i;j++)
                                  printf("   ");

                b=i+1;
                for(j=0;j<=i;j++)
                                 printf("%3d",b--);

                b=2;
                for(j=0;j<i;j++)
                                 printf("%3d",b++);

                printf("\n\n");
                sleep(1);
        }

        getch();
        return 0;
}