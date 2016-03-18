/*
	UVA 10812 - Beat the Spread!
*/

#include<iostream>
using namespace std;

int main()
{
	long sum,diff,T;
	cin>>T;
	while(T--)
	{
		cin>>sum>>diff;
		if(sum<diff || (sum+diff)%2)
			cout<<"impossible\n";
		else
			cout<<(sum+diff)/2<<" "<<(sum-diff)/2<<endl;
	}
	return 0;
}