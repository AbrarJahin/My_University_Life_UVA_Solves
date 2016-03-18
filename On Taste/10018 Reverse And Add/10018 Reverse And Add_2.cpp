#include<stdio.h>
unsigned long reverse(register unsigned long);
int main()
{
    register unsigned long n,num,rev,i;
    //freopen("in.txt","r",stdin);
    scanf("%lu",&n);
    while(n--)
    {
        scanf("%lu",&num);
        for(i=0;;i++)
        {
            rev=reverse(num);
            if(!(num^rev))
                break;
            num=num+rev;
        }
        printf("%lu %lu\n",i,num);
    }
    return 0;
}
unsigned long reverse(register unsigned long num)
{
    unsigned long r=0;
    while(num)
    {
        r=r*10+num%10;
        num=num/10;
    }
    return r;
}