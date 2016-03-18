/*
	UVa 10679 - I Love Strings!!
*/

#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int test_case,t;
	string a,b;
	cin>>test_case;
	cin.ignore(100,'\n');
	while(test_case--)
	{
		getline(cin,a);
		cin>>t;
		cin.ignore(100,'\n'); // na dila b er value thik moto pai na...
		while(t--)                                                                                                           
		{
			getline(cin,b);
			bool result=true;
			if(b.size()>a.size())
				result=false;

			for (int i = 0, sz = b.size(); result && i < sz; i++)
			{
				if (a[i] != b[i])
				{
					result = false;
					break;
				}
			}

			if (result)
			{
				cout << "y" << endl;
			}
			else
			{
				cout << "n" << endl;
			}
		}
	}
	return 0;
}