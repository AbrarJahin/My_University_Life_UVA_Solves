/*
	10370 - Above Average
*/

#include<iostream>
#include<cstdio>
#define MAX 1001
using namespace std;

int main()
{
	long int C,N,sum,arr[MAX],above_avg;
	float avg;
	cin>>C;
	while(C--)
	{
		long i;
		sum=0;
		above_avg=0;
		cin>>N;
		for(i=0;i<N;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		avg=sum/N;
		for(i=0;i<N;i++)
			if(arr[i]>avg)
				above_avg++;
		printf("%.3f%%\n",((float)above_avg/(float)N)*100);
	}
	return 0;
}