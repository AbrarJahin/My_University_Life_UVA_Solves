/*
	10579 - Fibonacci Numbers
	problem => 
*/

#include<iostream>
#define MAX 1001
using namespace std;

/*int fibonacci(int num)
{
	int f1=1,f2=1;
	if(num<3)
		return 1;
	for(int i=3;i<=num;i++)
	{
		if(i%2)
			f1+=f2;
		else
			f2+=f1;
	}
	if(num%2)
		return f1;
	else
		return f2;
}*/

void print_result(char num[])
{
	
}

int max(int a, int b)
{
	if(a>b)
		return a;
	return b;
}

void add(char num1[], char num2[], char result[])
{
	int num1_len=strlen(),num2_len;
	int result_len=1+max(num1_len,num2_len);
	
}

void fibonacci(long unsigned int num)
{
	char num1[MAX],num2[MAX],result[MAX];
	int f1=1,f2=1;
	if(num<3)
		return 1;
	for(int i=3;i<=num;i++)
	{
		if(i%2)
			f1+=f2;
		else
			f2+=f1;
	}
	if(num%2)
		print_result(f1);
	else
		print_result(f2);
}

int main()
{
	long unsigned int num;
	while(cin>>num)
		cout<<fibonacci(num)<<endl;
	return 0;
}