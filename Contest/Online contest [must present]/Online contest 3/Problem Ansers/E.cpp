#include<iostream>
using namespace std;

unsigned long reverse(unsigned long num)
{
	unsigned long ans=0;
	while(num)
	{
		ans*=10;
		ans+=num%10;
		num/=10;
	}
	return ans;
}

bool if_palindrome(unsigned long num)
{
	if(num==reverse(num))
		return true;
	return false;
}

int main()
{
	unsigned long old,num;
	while(cin>>num)
	{
		while(!if_palindrome(num))
		{
			old=num;
			num+=reverse(num);
			{
				if(old>num)
				{
					break;
				}
			}
		}
		if(old>num)
			cout<<"-1\n";
		else
			cout<<num<<endl;
	}
	return 0;
}