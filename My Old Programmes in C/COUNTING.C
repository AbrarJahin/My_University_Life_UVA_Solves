////////////////////////////////////////////////////////////////////
//         A programme for counting 3s in a given range           //
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,i,c,d=0,e=0;
        char f;
        clrscr();
	printf("\tPlease enter a limit up to 32767. . . . .");
	printf("\n\n\tPlease enter your desired end no. : ");
	scanf("%d",&a);

	for(i=1;i<=a;i++)
	{
                b=i;

		if(b>=10000 && b<100000)
		{
			
			c=b%10000;
			b=b/10000;

			if(b==3)
			{
			        d++;
			}
			b=c;
		        c=b%1000;
			b=b/1000;

			if(b==3)
			{
			        d++;
			}

			b=c%100;
			c=c/100;

			if(c==3)
			{
			        d++;
			}

			c=b%10;
			b=b/10;

			if(b==3)
			{
			        d++;
			}

			if(c==3)
			{
			        d++;
			}
		}


		if(b>=1000 && b<10000)
		{
		        c=b%1000;
			b=b/1000;

			if(b==3)
			{
			        d++;
			}

			b=c%100;
			c=c/100;

			if(c==3)
			{
			        d++;
			}

			c=b%10;
			b=b/10;

			if(b==3)
			{
			        d++;
			}

			if(c==3)
			{
			        d++;
			}
		}

		if(b>=100 && b<1000)
		{
		        c=b%100;
			b=b/100;

		        if(b==3)
		        {
		                d++;
		        }

		        b=c%10;
		        c=c/10;

		        if(b==3)
		        {
		                d++;
		        }

			if(c==3)
			{
			        d++;
			}

		}

                if(b>=10 && b<100)
                {
                        c=b%10;
			b=b/10;

		        if(b==3)
		        {
		                d++;
		        }

                        if(c==3)
		        {
		                d++;
		        }
                }

		else
		{
			if(b==3)
			{
					d++;
			}
		}
	}
        /*

	printf("The no. of digit 3 between 1 to %ld is %ld.",a,d);

        printf("\n\n\n\n\n\n\tDo you want to see the no.s : [y\\n]");
        e=getch();


        What's the problem hare??????????????????

        Lvalue required???????????????


        while(e|='y' && e|='Y' && e|='n' && e|='N')
        */


        b=0;
        while(1)
        {
                clrscr();
                gotoxy(20,20);
                printf("The no. of digit 3 between 1 to %d is %d.",a,d);

                //printf("\n\n\n\n\n\n\tDo you want to see the no.s : [y\\n]");
                if(b>0)
                       printf("\n\n\n\t\tPlease enter correct value. . . . .");
                printf("\n\n\n\t\tDo you want to see the no.s : [y\\n]");
                f=getch();
                if(f=='y' || f=='Y' || f=='n' || f=='N')
                {
                        break;
                }

                       b++;
        }
        clrscr();

        if(f=='y' || f=='Y')
        {
	        for(i=1;i<=a;i++)
	        {
                        d=0;
                        b=i;
			if(b>=10000 && b<100000)
			{
			
				c=b%10000;
				b=b/10000;

				if(b==3)
				{
			                printf("%6d",i);
                                        d++;
                                        e++;
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
				}
				b=c;
		                c=b%1000;
			        b=b/1000;

			        if(b==3)
			        {
			                printf("%6d",i);
                                        d++;
                                        e++;
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
			        }

			        b=c%100;
			        c=c/100;

			        if(c==3 && d==0)
			        {
			                printf("%6d",i);
                                        d++;

                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
			        }

			        c=b%10;
			        b=b/10;

			        if(b==3 && d==0)
			        {
			                printf("%6d",i);
                                        d++;
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
			        }

			        if(c==3 && d==0)
			        {
			                printf("%6d",i);
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
			        }
		        }


		        if(b>=1000 && b<10000)
		        {
		                c=b%1000;
			        b=b/1000;

			        if(b==3)
			        {
			                printf("%6d",i);
                                        d++;
                                        e++;
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
			        }

			        b=c%100;
			        c=c/100;

			        if(c==3 && d==0)
			        {
			                printf("%6d",i);
                                        d++;

                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
			        }

			        c=b%10;
			        b=b/10;

			        if(b==3 && d==0)
			        {
			                printf("%6d",i);
                                        d++;
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
			        }

			        if(c==3 && d==0)
			        {
			                printf("%6d",i);
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
			        }
		        }

		        if(b>=100 && b<1000)
		        {
		                c=b%100;
			        b=b/100;

		                if(b==3)
		                {
		                        printf("%6d",i);
                                        d++;
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
		                }

		                b=c%10;
		                c=c/10;

		                if(b==3 && d==0)
		                {
		                        printf("%6d",i);
                                        d++;
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
		                }

			        if(c==3 && d==0)
			        {
			                printf("%6d",i);
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
			        }

		        }

                        if(b>=10 && b<100)
                        {
                                c=b%10;
			        b=b/10;

		                if(b==3)
		                {
		                        printf("%6d",i);
                                        d++;
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
		                }

                                if(c==3 && d==0)
		                {
		                        printf("%6d",i);
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
		                }
                        }

		        else
		        {
			        if(b==3)
			        {
					printf("%6d",i);
                                        if(e==12)
                                        {
                                                e=0;
                                                printf("\n");
                                        }
			        }
		        }

		        b=a;
	        }

        }
        getch();
        printf("\n\n\tThanks to all . . . . . . .");

	//delay(2000);
	return 0;
}