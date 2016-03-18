/*
	UVA 12239 – Bingo!
*/

#include<iostream>
#include<cstring>
#define MAX 95
using namespace std;
int N;
int find_sum(bool arr[])
{
	register int sum=0;
	for(int i=1;i<MAX;i++)
	{
		sum+=arr[i];
		if(sum==N)
			break;
	}
	return sum;
}

int mod(int a, int b)
{
	if(a>b)
		return a-b;
	return b-a;
}

int main()
{
	register int B,givenArray[MAX];
	bool difference[MAX];
	while(cin>>N>>B)
	{
		register int i,j;
		if(N==0 && B==0)
			break;
		for(i=0;i<B;i++)		//b no of inputes
			cin>>givenArray[i];
		memset(difference,0,sizeof(difference));
		for(i=0;i<B;i++)
			for(j=i;j<B;j++)
				difference[mod(givenArray[i],givenArray[j])]=1;
		if(N==find_sum(difference))		//==N or ==B
			cout<<"Y\n";
		else
			cout<<"N\n";
	}
	return 0;
}