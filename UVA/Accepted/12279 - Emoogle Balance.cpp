/*
	UVa 12279: Emoogle Balance
*/

#include<iostream>
using namespace std;
int main()
{
	int T,non_zero,taste_number=1;
	while(cin>>T)
	{
		int temp;
		if(!T)
			break;
		non_zero=0;
		while(T--)
		{
			cin>>temp;
			if(temp)
				non_zero++;
			else
				non_zero--;
		}
		cout<<"Case "<<taste_number++<<": "<<non_zero<<endl;
	}
	return 0;
}