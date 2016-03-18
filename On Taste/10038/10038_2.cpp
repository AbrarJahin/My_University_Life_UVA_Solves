#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int num[3000],dif[3000],i,j,k,t,a,n;
while(scanf("%d",&n)==1)
{
for(i=1;i<=n;i++)scanf("%d",&num[i]);
k=0;
for(j=1;j<=n;j++)
{
dif[j]=abs(num[j]-num[j+1]);
}
for(j=1;j<n;j++)
{
for(i=1;i<n;i++)
{
if(dif[i]>dif[i+1])
{
t=dif[i];
dif[i]=dif[i+1];
dif[i+1]=t;
}
}
}
for(i=1;i<n;i++)
{
if(dif[i]!=i) k++;
}
if(k==0)printf("Jolly\n");
else printf("Not jolly\n");
}
return 0;
}