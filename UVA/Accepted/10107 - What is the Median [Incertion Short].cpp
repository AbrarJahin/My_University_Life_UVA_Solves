/*
	10107 - What is the Median?
	using Insertion Short
*/

#include<iostream>
using namespace std;
#define MAX 10001

int main()
{
	long int num[MAX];
	unsigned total_num=0;
	while(cin>>num[total_num++])
	{
		long int temp;
		//insertion short
		temp=num[total_num-1];
		for(int i=total_num-1;i>0;i--)
		{
			if(num[i-1]<temp)
			{
				num[i]=temp;
				break;
			}
			num[i]=num[i-1];
		}
		//shorting END
		if(total_num%2)
			cout<<num[total_num/2]<<endl;
		else
			cout<<(num[total_num/2]+num[total_num/2-1])/2<<endl;
	}
	return 0;
}