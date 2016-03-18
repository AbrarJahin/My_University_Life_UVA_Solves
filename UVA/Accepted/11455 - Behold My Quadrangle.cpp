/*
	11455 - Behold My Quadrangle
	problem => http://uva.onlinejudge.org/external/114/11455.html
*/

#include<stdio.h>
#include<iostream>
using namespace std;


void sort(long unsigned int num[])					//SMALL TO LARGE
{
	long unsigned int temp;
	for(int i=0;i<4;i++)
	{
		for(int j=3;j>=i;j--)
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
	}
}

int main()
{
	long unsigned int num[4];
	int T;
	cin>>T;
	while(T--)
	{
		cin>>num[0]>>num[1]>>num[2]>>num[3];
		sort(num);
		if(num[0]==num[3])
			cout<<"square\n";
		else if(num[0]==num[1] && num[2]==num[3])
			cout<<"rectangle\n";
		else if((num[3]-num[0]-num[1]-num[2])>1073741829)				//for checking over-flow ; 1073741829>2^30
				cout<<"quadrangle\n";
		else
				cout<<"banana\n";
	}
	return 0;
}