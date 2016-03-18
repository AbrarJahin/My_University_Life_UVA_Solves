#include<iostream>
using namespace std;
#define HIGHEST_VSLE	4000000

int main()
{
	long unsigned int summition=0,no_of_term=0,current_vale=0,f1=0,f2=1;
	while(current_vale<HIGHEST_VSLE)
	{
		if(no_of_term%2)
		{
			no_of_term++;
			current_vale+=f1;
			f2=current_vale;
		}
		else
		{
			no_of_term++;
			current_vale+=f2;
			f1=current_vale;
		}

		if(!(current_vale%2))
		{
			summition+=current_vale;
		}
		cout<<current_vale<<"\t";
	}
	cout<<endl;
	return 0;
}