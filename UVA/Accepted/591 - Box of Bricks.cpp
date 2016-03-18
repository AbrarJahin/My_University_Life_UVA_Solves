#include<iostream>
using namespace std;

long subtract(int a,int b)
{
	if(a>b)
		return a-b;
	return b-a;
}

int main()
{
	int num,avg,counter=0,i;
	while(cin>>num)
	{
		int arr[1000];
		long sum=0;
		if(num==0)
			break;
		for(i=0;i<num;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		avg=sum/num;
		sum=0;
		for(i=0;i<num;i++)
		{
			sum+=subtract(avg,arr[i]);
		}
		cout<<"Set #"<<++counter<<"\nThe minimum number of moves is "<<(sum/2)<<".\n\n";
	}
	return 0;
}