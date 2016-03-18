#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main()
{
    char ch;
    while(scanf("%c",&ch)==1)
        if(ch=='\n')
            cout<<endl;
        else
        printf("%c",ch-7);
	return 0;
}