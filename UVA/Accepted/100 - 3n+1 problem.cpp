#include<iostream>
using namespace std;


class number
{
	unsigned long n;

	unsigned get_cycle(unsigned long x)
	{
		unsigned cycle=0;
		n=x;
		while(n>0)
		{
			//cout<<n<<" ";
			if(n==1)
				break;
			if(n%2)
				n=3*n+1;
			else
				n/=2;
			cycle++;
		}
		return cycle+1;
	};
public:
	unsigned get_largest(unsigned long i, unsigned long j)
	{
		unsigned max_cycle=0;
		unsigned long temp;
		if ( i > j )
		{
			temp=i;
			i=j;
			j=temp;
		}
		for(;i<=j;i++)
		{
			temp=get_cycle(i);
			if(max_cycle<temp)
				max_cycle=temp;
		}
		return max_cycle;
	};
};

int main()
{
	number x;
	int i,j;
	while(cin>>i>>j)
	{
		/*cout<< x.get_largest(i,j)<<endl;
		printf ("%d %d %d\n", temp_i, temp_j, max_cycle_length);*/
		cout<<i<<" "<<j<<" "<<x.get_largest(i,j)<<endl;
	}
	return 0;
}