#include<stdio.h>
//#include<conio.h>
int main()
{
long long int n,div,rem,rev,sum,d,c,t,m;
scanf("%lld",&t);
for(m=0;m<t;m++)
{
scanf("%lld",&n);
d=n;
c=0;
while(1)
{
sum=0;
while(d!=0)
{
rem=d%10;
d/=10;
sum=(sum*10)+rem;
}
if(sum==n)
break;
else
{
d=sum+n;
n=sum+n;
c++;
}
}
printf("%lld %lld\n",c,n);
}
//getch();
return 0;
}