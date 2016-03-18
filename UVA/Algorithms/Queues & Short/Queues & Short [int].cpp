#include <deque>                                                       
#include <algorithm>                                            
#include <iostream>                                                        
using namespace std;                                                    
                                                                       
int main()                                                                 
{
	int i;
	deque<int> Q;       //  An empty, elastic, container ready to hold ints.
						/*
							A deque is a double-ended queue. Queues (unlike lists) are
							data structures where you wouldn't expect to insert new items
							anywhere else but at the ends
						*/

	Q.push_back(0);     			/*
										Many containers have a push_back
				                    	routine. It's a way to add elements
				                    	to a container in a safe way - the
				                    	container will grow if it's not big enough.
				                    */
	Q.push_back(2);
	Q.push_back(1);
	cout<<"\nBefore shorting queue :\n";
	for(i=0;i<Q.size(); i++)
	{
		cout<<Q[i];			//cout<<Q[i].value; is ERROR cause hare value must be class, union or structure type
		cout<<" ";
	}
	cout <<endl;       
	sort(Q.begin(), Q.end());		// Now let's sort!	//*************************************************************//
										/* 	the arguments we've given to sort mean that the whole queue
											will be sorted, and that the result will be copied back to
											the original queue. sort uses the default sorting criterium
											for integers, and can use the swap function of Q to switch
											elements around.
										*/
	cout<<"\nAfter shorting queue :\n";

	for(i=0;i<Q.size(); i++)
	{
		cout<<Q[i];			//cout<<Q[i].value; is ERROR cause hare value must be class, union or structure type
						//printing values from queue
		cout<<" ";
	}
	cout <<endl;						// Output: 0 1 2
	return 0;
}