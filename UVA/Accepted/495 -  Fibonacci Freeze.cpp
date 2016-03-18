/*
	495 - Fibonacci Freeze
*/


#include<stdio.h>
#define lim 5002
#define len 1050

int fbn[lim][len];																//Array to hold fibonacci number
int fbnLen[lim];																//Array to hold fibonacci number length
void fibonacci()
{
	int i,j;
	fbn[0][0]=0;
	fbnLen[0]=1;
	fbn[1][0]=1;
	fbnLen[1]=1;
	fbn[2][0]=1;
	fbnLen[2]=1;
	for(i=3;i<lim;i++)
	{
		for(j=0;j<len;j++)
		{
			int temp;
			fbn[i][j]+=fbn[i-2][j]+fbn[i-1][j];
			temp=fbn[i][j]/10;
			if(fbn[i][j])
				fbnLen[i]=j+temp+1;
			if(fbn[i][j]>=10)
			{
				fbn[i][j+1]+=temp;
				fbn[i][j]%=10;
			}
			if(j>fbnLen[i-1]+2)
				break;
		}
	}
}

int main()
{
	fibonacci();
	int n,i;
	while(scanf("%d",&n)==1)
	{
		/*for(i=len-1;i>0;i--)
			if(fbn[n][i]!=0)
				break;*/
		printf("The Fibonacci number for %d is ",n);
		for(i=fbnLen[n]-1;i>=0;i--)printf("%d",fbn[n][i]);
		printf("\n");
	}
	return 0;
}