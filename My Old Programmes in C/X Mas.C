//////////////////////////////////////////////////////////////////////
//               A programme for making a X mas tree                //
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
	int m,n=1,i,j,k;
        //clrscr();
        printf("Blocks u want to print  : ");
        scanf("%d",&n);
        printf("Lines u want to print in last block : ");
        scanf("%d",&m);
        m++;
		printf("\n\n\n");
        //clrscr();
        /*n=n*2;
        for(k=n;k>0;k-=2)*/
        for(k=n;k>0;k--)
        {
                for(i=0;i<m-k;i++)
                {
                        for(j=0;j<m-i;j++)
                        {
                                printf(" ");
                        }

                        for(j=0;j<=i;j++)
                        {
                                printf("*");
                                //delay(60);
                        }

                        for(j=0;j<m-(m-i);j++)
                        {
                                printf("*");
                                //delay(60);
                        }

                        printf("\n");
                        //delay(300);
                }
                //sleep(1);
                printf("\n");
        }
        getch();
        return 0;
}