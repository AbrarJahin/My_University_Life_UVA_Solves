/**********************************************
	Problem no. 10061
		Problem G
How many zeros and how many digits? 
	Input: standard input
	Output: standard output
***********************************************/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num,base,zero=0,digit=0, convert[25];
	long int fact=1;
	for(num=0;num<25;num++)
	{
		convert[num]=0;
	}
	printf("\n\n\tPlease enter number & base [number (space) base] :");
	scanf("%d %d",&num,base);
	while(num!=1)
	{
		fact*=(long int)num;
		num--;
	}

	if(base!=10)
	{
		while(num!=0)
		{
			convert[digit]=num%base;
			num/=base;
			digit++;
		}
	}
	
	for(num=0;num<digit;num++)
	{
		if(convert[num]==0)
		{
			zero++;
		}
	}
	
	printf("\n\n\tZero\t=\t%d .\n\n\tDigit\t=\t%d .",zero,digit);
	
	getch();
	return 0;
}