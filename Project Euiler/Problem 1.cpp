#include<iostream>
using namespace std;

int main()
{
	long unsigned int reasult=0;
	for(int i=1;i<1000;i++)
	{
		if(!(i%3 && i%5))
			reasult+=i;
	}
	cout<<reasult<<endl;
	return 0;
}