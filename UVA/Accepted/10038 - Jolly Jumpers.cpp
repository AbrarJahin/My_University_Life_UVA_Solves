/*
	10038 - Jolly Jumpers
*/

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	int input;																	// for test case
	int last, next, result;														// temporary used for set the places
	int i;
	bool flag;																	// check if jolly or not jolly
	while (cin >> input)
	{
		vector <bool> place(3005);												// each time place will automatically initialized to zero
		flag = true;
		cin >> last;
		for (i = 1; i < input; i++)												// i = 1 as first input take before it
		{
			cin >> next;
			result = abs(last - next);
			place[result] = true;
			last = next;
		}
		for (i = 1; i < input; i++)												// main condition successive elements take place
			if (!place[i])
			{
				flag = false;
				break;
			}
		if (flag)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}
	return 0;
}