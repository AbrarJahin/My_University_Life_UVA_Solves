/*
	12049 - Just Prune The List
	problem => http://uva.onlinejudge.org/external/120/12049.html
*/

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#define MAX 10001
using namespace std;

int compare (const void * a, const void * b)
{
 	return ( *(int*)a - *(int*)b );
}

int main()
{
	long int numArray1[MAX],numArray2[MAX],T,numArray1Size,numArray2Size,no_of_removed_elements;
	cin>>T;
	while(T--)
	{
		long int i,CounterFor1stArray,counterFor2ndArray;
		no_of_removed_elements=0;
		CounterFor1stArray=0;
		counterFor2ndArray=0;
		cin>>numArray1Size>>numArray2Size;
		for(i=0;i<numArray1Size;i++)
			cin>>numArray1[i];
		qsort (numArray1,numArray1Size,sizeof(long int),compare);
		for(i=0;i<numArray2Size;i++)
			cin>>numArray2[i];
		qsort (numArray2,numArray2Size,sizeof(long int),compare);
		while(CounterFor1stArray<numArray1Size || counterFor2ndArray<numArray2Size)
		{
			while((numArray1[CounterFor1stArray]<numArray2[counterFor2ndArray] || counterFor2ndArray==numArray2Size) && CounterFor1stArray<numArray1Size)
			{
				no_of_removed_elements++;
				CounterFor1stArray++;
			}
			while((numArray1[CounterFor1stArray]>numArray2[counterFor2ndArray] || CounterFor1stArray==numArray1Size) && counterFor2ndArray<numArray2Size)
			{
				no_of_removed_elements++;
				counterFor2ndArray++;
			}
			while(numArray1[CounterFor1stArray]==numArray2[counterFor2ndArray])
			{
				bool flag;
				flag=false;
				if(CounterFor1stArray<numArray1Size)
					CounterFor1stArray++;
				else
					flag=true;
				if(counterFor2ndArray<numArray2Size)
					counterFor2ndArray++;
				else if(flag)
					break;
			}
		}
		cout<<no_of_removed_elements<<endl;
	}
	return 0;
}