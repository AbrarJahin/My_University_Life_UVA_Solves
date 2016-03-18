#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;


int main()
{
	char str[100][100];
	int i=0,size,max=0;
	while(gets(str[i]))	
	{
		size=strlen(str[i++]);
		if(max<size)
			max=size;
	}
	i--;
	for(int k=0;k<max;k++)
	{
		for(int j=i;j>=0;j--)
		{
			if(str[j][k]=='\n' || strlen(str[j]) - 1 <k)
				cout<<" ";
			else
				cout<<str[j][k];
		}
		cout<<endl;
	}
	return 0;
}