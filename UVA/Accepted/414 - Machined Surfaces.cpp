#include<iostream>
#include<cstdio>
using namespace std;

unsigned find_max(unsigned arr[],int size)
{
	int max=0;
	while(size--)
		if(arr[size]>max)
			max=arr[size];
	return max;
}

unsigned find_ans(unsigned arr[],int size)
{
	unsigned max=find_max(arr,size),ans=0;
	while(size--)
		ans+=(max-arr[size]);
	return ans;
}

int main()
{
	unsigned arr[13],number_of_input;
	char ch;
	int i;
	cin>>number_of_input;
	while(number_of_input)
	{
		for(i=0;i<13;i++)
			arr[i]=0;
		for(i=0;i<number_of_input;i++)
		{
			int x=25;
			getchar();
			while(x--)
			{
				ch=getchar();
				if(ch=='X')
					arr[i]++;
			}
		}
		cout<<find_ans(arr,number_of_input)<<endl;
		cin>>number_of_input;
	}
	return 0;
}