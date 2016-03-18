//////////////////////////////////////////////////////////////////////
//               A programme for making a pyramid no 2              //
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
	int m,n=0,i,j;
//        clrscr();
        printf("Lines u want to print  : ");
        scanf("%d",&m);
//        clrscr();
        for(i=0;i<m;i++)
        {
                for(j=1;j<m-i;j++)
                {
                        printf("    ");
                }

                for(j=0;j<=i;j++)
                {
                        n++;
                        printf("%4d",n);
  //                      delay(100);
                }
                for(j=0;j<m-(m-i);j++)
                {
                        n--;
                        printf("%4d",n);
//                        delay(100);
                }

                printf("\n\n");
//                sleep(1);
        }

        getch();
        return 0;
}