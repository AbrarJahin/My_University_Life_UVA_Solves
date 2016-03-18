#include <stdio.h>
#include <vector>
#include <string.h>
#include <math.h>
#include<iostream>
using namespace std;

#define MAX 20005

vector<int>prime;
bool p[MAX+5];
int pf[5000000+5];

void sieve()
	{
    int i,j;
    p[1]=1;
    for(i=2;i<=sqrt(MAX);i++){
        if(p[i])continue;
        for(j=i*i;j<=MAX;j+=i){
            p[j]=1;
        }
    }
    for(i=2;i<=MAX;i++)if(!p[i])prime.push_back(i);
}

int main()
{
    sieve();
    long number,arr[5000],value[5000];
    while(cin>>number)
    {
    	int i;
    	long counter=0,high=0,highest_values=0;
    	for(i=0;i<number;i++)
    	{
    		counter=0;
	    	cin>>arr[i];
	    	int j=0;
	    	while(prime[j]<=arr[i])
	    		if(!(arr[i]%prime[j]))
	    			counter=j;
   			value[i]=counter;
   			if(value[i]>high)
   			{
			   	high=value[i];	
			   	highest_values=0;
   			}
   			if(high==value[i])
  			{
			  	highest_values++;
		    }
	    }
	    while(highest_values)
	    {
	    	i=0;
    		if(high==value[i])
   			{
			   	cout<<arr[i]<<endl;
			   	highest_values--;
		   }
    	}
    }
    return 0;
}
