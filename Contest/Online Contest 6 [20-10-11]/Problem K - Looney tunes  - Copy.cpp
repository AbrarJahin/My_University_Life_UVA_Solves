#include<stdio.h>
#include<string.h>

char arr[100001],cpy[100001]="";
unsigned str_len,start,end,i,j,k=0,l;
bull flag=0;

void found()
{
	
}

int main()
{
	while(gets(arr))
	{
		//cpy string should be initiased hare
		k=0;
		str_len=strlen(arr)-1;
		i=str_len;
		while(i)
		{
			while(arr[i]!=']' && i)
			{
				cpy[i]=arr[i];
				i--;
			}
			j=end=i-1;
			while(arr[j]!='[' && j)
			{
				j--;
			}
			start=j+1;
			l=k;
			k+=end-start;
			for(;l<=k;l++)
			{
				cpy[l]=arr[j+l+1];
			}
			i=j-1;
		}
	}
	return 0;
}