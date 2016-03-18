/*
	10070 -	Leap Year or Not Leap Year and ...
*/

# include <stdio.h>
# define max 1005

# define t1 ((!divide(str,4) && divide(str,100))|| !divide(str,400))
# define t2 (!divide(str,15))
# define t3 (t1 && !divide(str,55))
# define t4 (!t1 && !t2 && !t3)

long divide(char* number,long div)
{
    long i,extra;

    for (i=0,extra=0;number[i];i++)
    {
        extra = extra*10+(number[i]-'0');
        extra%=div;
    }
    return extra;
}

int main()
{
    char str[max];
    long remainder,value;
    value = 0;
    while(scanf("%s",&str)==1)
    {
        if(value)
     printf("\n");
     value = 1;

     if(t1)
     	puts("This is leap year.");
     if(t2)
     	puts("This is huluculu festival year.");
     if(t3)
     	puts("This is bulukulu festival year.");
     if(t4)
     	puts("This is an ordinary year.");
    }
    return 0;
}