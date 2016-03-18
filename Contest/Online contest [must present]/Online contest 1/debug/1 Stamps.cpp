#include<iostream>
using namespace std;

int main()
{
	long arr[1000],temp;
	unsigned taste;
	int i,j;
	cin>>taste;
	for(i=1;i<=taste;i++)
	{
		long need;
		cin>>need;
		int size;
		cin>>size;
		for(j=0;j<size;j++)
			cin>>arr[j];
		for(j=0;j<size;j++)
		{
			for(int k=j+1;k<size;k++)
				if(arr[j]<arr[k])
				{
					temp=arr[j];
					arr[j]=arr[k];
					arr[k]=temp;
				}
		}
		int counter=0;
		unsigned long sum;
		bool flag;
		flag=false;
		sum=arr[counter];
		while(counter<=size)
		{
			counter++;
			if(sum>=need)
			{
				flag=true;
				break;
			}
			sum+=arr[counter];
		}
		if(flag==true)
			cout<<"Scenario #"<<i<<":\n"<<counter<<endl;
		else
			cout<<"Scenario #"<<i<<":\nimpossible\n";
	}
	return 0;
}