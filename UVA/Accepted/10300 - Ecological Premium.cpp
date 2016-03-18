#include<iostream>
using namespace std;

int main()
{
	int taste_case;
	cin>>taste_case;
	for(int i=0;i<taste_case;i++)
	{
		int no_of_farmers;
		long int output=0;
		cin>>no_of_farmers;
		for(int j=0;j<no_of_farmers;j++)
		{
			int x,y,z;
			cin>>x>>y>>z;
			output+=(x*z);
		}
		cout<<output<<endl;
	}
	return 0;
}