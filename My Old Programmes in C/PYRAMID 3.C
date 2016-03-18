//////////////////////////////////////////////////////////////////////
//              A programme for making a pyramid no 3               //
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
	int m,n=1,x,i,j;
        clrscr();
        printf("Lines u want to print  : ");
        scanf("%d",&m);
        clrscr();
        for(i=0;i<m;i++)
        {
                for(j=1;j<m-i;j++)
                {
                        printf("    ");
                }

                for(j=0;j<=i;j++)
                {
                        printf("%4d",n++);
                        delay(100);
                }

                x = n-2;
                for(j=0;j<m-(m-i);j++)
                {
                        printf("%4d",x--);
                        delay(100);
                }

                printf("\n\n");
                sleep(1);
        }

        getch();
        return 0;
}