/*//////////////////////////////////////////////////////////////////////////////
      A programme for finding LCS [Longest COmmon String]
      @ Piash
//////////////////////////////////////////////////////////////////////////////*/


#include<iostream>
using namespace std;

int main()
{
	long long input;
	while(cin>>input)
	{
		input=input*input*(input+1)*(input+1)/4;
		cout<<input<<endl;
	}
	return 0;
}
