#include<iostream>
#include<cmath>
using namespace std;

long find_no(long num)
{
	int counter=0,condition=sqrt(num);
	for(int i=0;i<=condition;i++)
		for(int j=i;j<=condition;j++)
			if(num==i*i+j*j)
				if(i==j || i==0)
					counter+=4;
				else
					counter+=8;
	return counter;
}

int main()
{
	long num;
	for(int i=0;i<100;i++)
	{
		cin>>num;
		cout<<find_no(num)<<endl;
	}
	return 0;
}