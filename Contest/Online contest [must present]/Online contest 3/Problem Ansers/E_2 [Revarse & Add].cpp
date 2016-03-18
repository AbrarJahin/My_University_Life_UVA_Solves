#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

char num[35];

void reverse_add()
{
	int i,size=strlen(num);
	char old[35],temp=0,cary=0;
	num[size+1]=0;
	strcpy(old,num);
	strrev(num);
	for(i=size;i>0;i--)
	{
		if((old[i-1]+num[i-1]+cary-'0')>'9')
		{
			temp=old[i-1]+num[i-1]+cary-'9'-1;
			cary=(old[i-1]+num[i-1]+cary-'0'*2)/10;
		}
		else
		{
			temp=old[i-1]+num[i-1]+cary-'0';
			cary=0;
		}
		num[i]=temp;
	}
	if(cary)
	{
		num[0]=cary+'0';
		return;
	}	
	else
	{
		i=0;
		while(i<2+size)
		{
			num[i]=num[i+1];
			i++;
		}
	}
}

int main()
{
	bool flag;
	char old[35];
	while(cin>>num)
	{
		flag=false;
		strcpy(old,num);
		strrev(old);
		while(strcmp(num,old))
		{
			reverse_add();
			//cout<<num<<endl;	////////////////////////////
			strcpy(old,num);
			strrev(old);
			if(strlen(num)==31)
			{
				flag=true;
				break;
			}
		}
		if(flag)
		{
			flag=false;
			cout<<"-1\n";
		}
		else
			cout<<num<<endl;
	}
	return 0;
}