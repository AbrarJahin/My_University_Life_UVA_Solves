/*
	11192 - Group Reverse
*/

#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
	int i,j,l,d,a,n;
	char s[1000];
	while(cin>>n && n)
	{
		cin>>s;
		l=strlen(s);
		d=l/n;
		for(i=1;i<=n;i++)
		{
			a=i*d;
			for(j=a-1;j>=a-d;j--)
				cout<<s[j];
  		}
	 	cout<<endl;
	}
}
/*
#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

int main()
{
	char string[105];
	int G=1;
	while(cin>>G && G++)
	{
		cin>>string;
		int i=0,j=0,len=strlen(string);
		while(j*G<len)
		{
			for(i=0;i<G/2;i++)
			{
				char temp=string[j*G+i];
				string[j*G+i]=string[j*G-i+G-1];
				string[j*G-i+G-1]=temp;
			}
			j++;
		}
		//strrev(string);
		cout<<string<<endl;
	}
	return 0;
}
*/