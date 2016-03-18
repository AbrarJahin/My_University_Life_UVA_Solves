#include<stdio.h>
#include<string.h>

int if_vowel(char ch)
{
	if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
		return 1;
	return 0;
}

int check(int *arr)
{
	if(arr[0]==arr[1] && arr[1]==arr[2])
		return 1;
	return 0;
}

int main()
{
	char arr[3000];
	gets(arr);
	while(strcmp(arr,"end"))
	{
		int flag[3]={0,0,0},if_vowel_exist=0,flag_out=0;
		int i=0;
		flag[0]=if_vowel(arr[i]);
		while(arr[++i])
		{
			if((arr[i]!='e' || arr[i]!='o') && arr[i]==arr[i-1])
				flag_out=1;
			else
			{
				flag[i%3]=if_vowel(arr[i]);
				if(!if_vowel_exist)
					if(flag[i%3])
						if_vowel_exist=1;
				if(i>2)
					flag_out=check(flag);
			}
			if(flag_out)
				break;
		}
		if(!flag_out && if_vowel_exist)
			printf("<%s> is acceptable.\n",arr);
		else
			printf("<%s> is not acceptable.\n",arr);
		gets(arr);
	}
	return 0;
}