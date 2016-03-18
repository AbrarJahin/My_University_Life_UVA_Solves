#include<iostream>
using namespace std;

int get_value(long value)
{
	value*=(567);
	value/=9;
	value+=7492;
	value*=235;
	value/=47;
	value-=498;
	value%=100;
	if(value>0)
		return (value/10);
	return -(value/10);
}

int main()
{
	long value;
	int taste;
	cin>>taste;
	while(taste--)
	{
		cin>>value;
		cout<<get_value(value)<<endl;
	}
	return 0;
}