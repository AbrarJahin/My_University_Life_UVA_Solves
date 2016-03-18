#include<deque>																	//for queue
#include<algorithm>																//for sort
#include<iostream>
using namespace std;

class simple
{
public:
	int value;
	// redefine the '<' operator, so when 2 simple objects are
	// compared, the 'value' fields of the objects are compared.
	const bool operator<(const simple &rhs) const
	{
		return this->value < rhs.value;
	}
};
                                                                       
int main()                                                                 
{                                                             
	deque<simple> Q;       //  An empty, elastic, container.

	simple s;
	s.value=0;
	Q.push_back(s); 
	s.value=2;
	Q.push_back(s);   
	s.value=1;                                          
	Q.push_back(s);     

	for(int i=0;i<Q.size(); i++)
	{
		cout << Q[i].value;
		cout << " ";
	}
	cout <<endl;																// Output: 0 2 1
											// Now let's sort! sort uses the '<' operator that we created in the 'simple' class   
	sort(Q.begin(), Q.end());

	for(int i=0;i<Q.size(); i++)
	{
		cout << Q[i].value;
		cout << " ";
	}
	cout <<endl;							// Output: 0 1 2
	return 0;
}
