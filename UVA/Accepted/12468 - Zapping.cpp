/*
	12468 - Zapping
*/

#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int currentChannel,channelToGo;
	while(cin>>currentChannel>>channelToGo)
	{
		if(currentChannel<0 || channelToGo<0)
			break;
		int temp=currentChannel-channelToGo;
		if(temp<0)
			temp=-temp;
		if(temp<50)
			cout<<temp<<endl;
		else
			cout<<100-temp<<endl;
	}
	return 0;
}