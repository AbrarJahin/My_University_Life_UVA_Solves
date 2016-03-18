#include<stdio.h>
#include<math.h>

int find_factorial_digit(int input_number);

int main()
{
	int input_number;
	while((scanf("%d",&input_number))!=EOF)
	{
		printf("%d\n",find_factorial_digit(input_number));
	}
	return 0;
}

int find_factorial_digit(int input_number)
{
	double output_nuimber=1;
	while(input_number!=1)
	{
		output_nuimber+=log10((double)input_number--);
	}
	return (int)output_nuimber;
}