#include<iostream>
using namespace std;

long arr[100000][100000];

void find_short_distance(i,j)				//i & j == Node
{
	long a,b;
	{
		
	}
}

void find_waight(long num)
{
	long i,j,x,y;
	for(i=0;i<num;i++)				//initialising of graph
		for(j=0;j<=i;j++)
			arr[i][j]=-1;
	for(i=0;i<num;i++)					//Input
	{
		cin>>x>>y;
		cin>>arr[x-1][y-1];
	}
	for(i=0;i<num;i++)
		for(j=0;j<=i;j++)
			if(arr[i][j]<0)				// value found -1 so we have to find its distence
				find_short_distance(i,j);
	return;
}

int main()
{
	long num;
	while(cin>>num)
	{
		find_waight(num);
		long taste_case;
		cin>>taste_case;
		while(taste_case--)
		{
			long x,y;
			cin>>x>>y;
			cout<<arr[x-1][y-1];
		}
	}
	return 0;
}