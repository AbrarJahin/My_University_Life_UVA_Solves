/*
	UVA - 11799 - Horror Dash
*/

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	unsigned int T,N,input,output,i;
	cin>>T;
	for(i=1;i<=T;i++)
	{
		output=0;
		cin>>N;
		while(N--)
		{
			cin>>input;
			if(input>output)
				output=input;
		}
		cout<<"Case "<<i<<": "<<output<<endl;
	}
	return 0;
}