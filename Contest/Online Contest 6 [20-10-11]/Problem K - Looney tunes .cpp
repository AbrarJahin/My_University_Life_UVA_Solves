#include<stdio.h>
#include<string.h>

int main()
{
	char arr[100001],cpy[100001]="";
	unsigned str_len,start,end,i,j,k=0,l;
	while(gets(arr))
	{
		str_len=strlen(arr)-1;
		i=str_len;
		while(i)
		{
			while(arr[i]!=']' && i)
			{
				cpy[i]=arr[i];
				i--;
			}
			j=i;
			while(arr[j]!='[' && j)
			{
				j--;
			}
			l=k;
			k+=(i-j-2);
			for(;l<=k;l++)
			{
				cpy[l]=arr[j+l+1];
			}
			i=j-1;
		}
	}
	return 0;
}