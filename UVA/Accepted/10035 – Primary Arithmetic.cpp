/*
	10035 – Primary Arithmetic
*/

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	char num1[100],num2[100],tempArray[100];
	int i,num1Size,num2Size,totalCarry,maxSize,currentCarry;
	while(cin>>num1>>num2)
	{
		totalCarry=0;
		num1Size=strlen(num1)-1;
		num2Size=strlen(num2)-1;
		if(num1Size==0 && num2Size==0 && num1[0]=='0' && num2[0]=='0')
			break;
		if(num1Size>num2Size)
		{
			int difference = num1Size-num2Size;
			maxSize=num1Size;
			strcpy(tempArray,num2);
			for(i=0;i<difference;i++)
				num2[i]='0';
			for(i=0;i<=num1Size;i++)
				num2[i+difference]=tempArray[i];
			num2[i+difference]=NULL;
		}
		else
		{
			int difference = num2Size-num1Size;
			maxSize=num2Size;
			strcpy(tempArray,num1);
			for(i=0;i<difference;i++)
				num1[i]='0';
			for(i=0;i<=num1Size;i++)
				num1[i+difference]=tempArray[i];
			num2[i+difference]=NULL;
		}
		currentCarry=0;
		for(i=maxSize;i>=0;i--)
		{
			int temp = num1[i]+num2[i]+currentCarry-'0'-'0';
			if(temp>=10)
			{
				currentCarry=temp/10;
				totalCarry++;
			}
			else
				currentCarry=0;
		}
		if(totalCarry==0)
			cout<<"No carry operation."<<endl;
		else if(totalCarry==1)
			cout<<"1 carry operation."<<endl;
		else
			cout<<totalCarry<<" carry operations."<<endl;
	}
	return 0;
}
