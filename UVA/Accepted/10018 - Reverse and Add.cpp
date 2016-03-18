#include<iostream>
using namespace std;

long unsigned int reverse(long unsigned int num)
{
	long unsigned int ans=0;
	while(num)
	{
		ans*=10;
		ans+=num%10;
		num/=10;
	}
	return ans;
}

bool if_palindrome(long unsigned int num)
{
	if(num==reverse(num))
		return true;
	return false;
}

int main()
{
	long taste_case;
	cin>>taste_case;
	while(taste_case--)
	{
		long unsigned int num;
		unsigned counter=0;
		cin>>num;
		while(!if_palindrome(num))
		{
			counter++;
			num+=reverse(num);
		}
		cout<<counter<<" "<<num<<endl;
	}
	return 0;
}