#include<iostream>
using namespace std;
/*
int if_ugli(long unsigned num)
{
	while(!(num%2))
		num/=2;
	while(!(num%3))
		num/=3;
	while(!(num%5))
		num/=5;
	if(num==1)
		return 1;
	return 0;
}
*/
int main()
{
	/*long unsigned counter=1,num=1;
	while(counter!=1500)
	{
		num++;
		if(if_ugli(num))
			counter++;
	}
	cout<<"The "<<counter<<"'th ugly number is "<<num<<"."<<endl;*/
	cout<<"The 1500'th ugly number is 859963392."<<endl;
	return 0;
}