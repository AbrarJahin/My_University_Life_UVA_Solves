#include<stdio.h>

int if_number(char ch)
{
	if(ch>='0' && ch<='9')
		return (int)(ch-'0');
	return 0;
}

void print_ch(char ch)
{
	if(ch=='b')
		printf(" ");
	else if(ch=='!')
		printf("\n");
	else
		printf("%c",ch);
}

int main()
{
	char ch;
	int is_prev_number=0;
	while(ch=getchar())
	{
		if(ch==EOF)
			break;
		else if((is_prev_number=if_number(ch)))
		{
			ch=getchar();
			while(if_number(ch))
			{
				is_prev_number+=if_number(ch);
				ch=getchar();
			}
			while(is_prev_number--)
				print_ch(ch);
		}
		else
			print_ch(ch);
	}
	return 0;
}