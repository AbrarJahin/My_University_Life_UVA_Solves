#include<iostream>
#include<cmath>
using namespace std;

int if_prime(int a)
{
	int asd=sqrt(a)+1;
	for(int i=2;i<=asd;i++)
		if(a%i==0)
			return 0;
	return 1;
}

int main()
{
	int range,counter=0;
	cin>>range;
	for(int i=1;i<=range;i++)
	{
		if(if_prime(i))
		{
			cout<<i<<" ";
			counter++;
		}
	}
	cout<<"\n\nTotal no of prime = "<<counter<<" ."<<endl;
	return 0;
}