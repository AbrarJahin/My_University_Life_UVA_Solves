
/////////////////////////////////////////////
//A programme for convert decimel to binary//
/////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
        int dec,bin[25],i;
		char a = 's';
        //clrscr();
		printf("\n\n\n\tIf u want to stop the programme, please press \" s \" .\n\n\tOtherwise press any other key .");
		while(a != getch())
		{
			for(dec=0;dec<25;dec++)
			{
				bin[dec] = 0;
			}
			i=0;
			printf("\n\n\nPlease enter a decimal number : ");
			scanf("%d",&dec);

			while(dec!=0)
			{
                 bin[i]=dec%2;
                 i++;
                 dec=dec/2;
			}

			printf("\n\n\tThe given number's binary no is = ");
			for(dec=0;dec<6-i;dec++)
			{
				printf("0");
			}
			for(dec=i;dec>0;dec--)
			{
                printf("%d",bin[dec-1]);
			}
			printf("\n\n\n\tIf u want to stop the programme, please press \" s \" .\n\n\tOtherwise press any other key .");
		}

		printf("\n\n\tThank you .");

        getch();
        return 0;
}