#include<iostream>
#include<cstdlib>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	unsigned long number,milk[10000];
	while(cin>>number)
	{
		for(int i=0;i<number;i++)
			cin>>milk[i];
		qsort (milk,number,sizeof(int),compare);
		cout<<milk[number/2]<<endl;
	}
	return 0;
}