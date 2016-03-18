#include<iostream>
#include<cmath>
#include<cstring>
#include<cvector>
using namespace std;
#define MAX 30000

vector<int>prime;
bool arr[MAX]={0,0,0};

void sieve()
{
	long max=sqrt(MAX);
	arr[0]=1;arr[1]=1;
	arr[2]=0;
	prime.push_back(2);
	for(i=3;i<=max;i++)
	{
		int j;
		if(arr[i]==0)
		{
			int k;
			prime.push_back(i);
			k=2;
			while(j<MAX)
			{
				j=i*k;
				if(arr[j]==0)
					arr[j]==1;
				k++;
			}
		}
		i++;
	}
}

typedef struct tag
{
	long value;
	bool flag;
}array;

int main()
{
	attay arr[5000];
	sieve();
	long taste;
	cin>>taste;
	while(taste--)
	{
		int need;
		cin>>need;
		for(int i=0;i<need;i++)
		cin>>arr[]
	}
	return 0;
}