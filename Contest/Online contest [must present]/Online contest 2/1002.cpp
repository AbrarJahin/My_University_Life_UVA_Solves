#include<iostream>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

bool if_ok(long n)
{
	bool flag=false;
	long difference_2=1090812768,number[10000],i;
	for(i=0;i<n;i++)
		cin>>number[i];
	qsort (number,n,sizeof(long),compare);
	for(i=1;i<n;i++)
	{
		if(difference_2==number[i-1]-number[i])
			flag=true;
		difference_2=number[i-1]-number[i];
	}
	return flag;
}

int main()
{
	long taste;
	cin>>taste;
	while(taste--)
	{
		long number;
		cin>>number;
		if(if_ok(number))
			cout<<"Y\n";
		else
			cout<<"N\n";
	}
	return 0;
}