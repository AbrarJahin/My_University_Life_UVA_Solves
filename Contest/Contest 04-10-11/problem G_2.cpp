#include<iostream>
using namespace std;

int main()
{
	char ch;
	unsigned long total_char=0;
	int flag=0;
	while((ch=getchar())!=EOF)
	{
		while(flag)
		{
			ch=getchar();
			if(ch!=' ' || ch!='\n')
				break;
			if(ch==EOF)
				return 0;
		}
		if(!(++total_char%80))
		{
			cout<<endl;
		}
		if(ch=='<')
		{
			ch=getchar();
			getchar();
			getchar();
			if(ch=='b')
				cout<<endl;
			else
			{
				cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
			}
		}
		else if(ch=='\n'||ch==' ')
		{
			cout<<" ";
			flag=1;
		}
		else
			cout<<ch;
	}
	return 0;
}