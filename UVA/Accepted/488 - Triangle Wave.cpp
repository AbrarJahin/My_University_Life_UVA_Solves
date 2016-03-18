#include<iostream>
using namespace std;

int main()
{
	int taste_case,i,j,to_print,number;
	cin>>taste_case;
	while(taste_case--)
	{
		int to_print,number;
		cin>>to_print>>number;
		while(number--)
		{
			for(i=1;i<=to_print;i++)
			{
				for(j=1;j<=i;j++)
					cout<<i;
				cout<<endl;
			}
			for(i=to_print-1;i>0;i--)
			{
				for(j=i;j>0;j--)
					cout<<i;
				cout<<endl;
			}
			if(number)
				cout<<endl;
		}
		if(taste_case!=0)
			cout<<endl;
	}
	return 0;
}