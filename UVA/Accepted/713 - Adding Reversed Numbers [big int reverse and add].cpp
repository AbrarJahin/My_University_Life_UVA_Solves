/*
	713 - Adding Reversed Numbers
*/

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 202
using namespace std;

void reAdjust(char num[],int stlen,int maxlen)
{
	int i,diff=maxlen-stlen;
	num[maxlen]='\0';				//set end string point
	for(i=maxlen-1;i>=diff;i--)
	{
		num[i]=num[i-diff];
	}
	for(i=diff-1;i>-1;i--)
		num[i]='0';
	return;
}

int main()
{
	char num1[MAX],num2[MAX],result[MAX];
	bool flag=true;
	int T;
	cin>>T;
	while(T--)
	{
		flag=false;
		int i,size1,size2,maxSize;
		cin>>num1>>num2;
		strrev(num1);
		strrev(num2);
		size1=strlen(num1);
		size2=strlen(num2);
		if(size2==size1)					//no adjustment needed
			maxSize=size1;
		else if(size1>size2)				//then re-adjust num2 with size1
		{
			maxSize=size1;
			reAdjust(num2,size2,maxSize);
		}
		else								//else re-adjust num1  with size2
		{
			maxSize=size2;
			reAdjust(num1,size1,maxSize);
		}
		//initilize result
		for(i=0;i<=maxSize;i++)
			result[i]='\0';
		//then find sum and show output reversed string
		for(i=maxSize;i>0;i--)
		{
			if(result[i]=='\0')
				result[i]='0';
			result[i-1]=(num1[i-1]+num2[i-1]+result[i]-3*'0')/10+'0';
			result[i]=(num1[i-1]+num2[i-1]+result[i]-3*'0')%10+'0';
		}
		i=0;
		while(result[i]=='0')
		{
			result[i]='q';
			i++;
		}
		i=maxSize;
		while(result[i]>='0' && result[i]<='9')
		{
			if(result[i]>'0' && result[i]<='9')
			{
				flag=true;
			}
			if(flag)
				cout<<result[i];
			i--;
			if(i<0)
				break;
		}
		cout<<endl;
	}
	return 0;
}