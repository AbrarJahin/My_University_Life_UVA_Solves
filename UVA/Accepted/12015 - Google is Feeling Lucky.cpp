/*
	12015 - Google is Feeling Lucky
*/

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

typedef struct tag
{
	char URL[100];
	int relevance;
}WebAdress;

int main()
{
	int T,MaxRelevance;
	WebAdress adress[10];
	cin>>T;
	for(int j=0;j<T;j++)
	{
		int i;
		MaxRelevance=-1000;
		for(i=0;i<10;i++)
		{
			cin>>adress[i].URL>>adress[i].relevance;
			if(adress[i].relevance>MaxRelevance)
				MaxRelevance=adress[i].relevance;
		}
		cout<<"Case #"<<j+1<<":\n";
		for(i=0;i<10;i++)
			if(MaxRelevance==adress[i].relevance)
				cout<<adress[i].URL<<endl;
	}
	return 0;
}