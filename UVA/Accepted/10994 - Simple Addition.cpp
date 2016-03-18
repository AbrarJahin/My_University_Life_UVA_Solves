/*
	UVA 10994 - Simple Addition
*/

#include<stdio.h>
#include<iostream>
using namespace std;

unsigned long long function(unsigned long long n)
{
 	unsigned long long s1=0,s2=0,m;
 	while(n) 
	{ 
		m = n%10;
		n = n/10;
		s1 += ( ( m * (m+1) ) / 2 );
		s2 += (double)n * 45;
	}
	return (s1 + s2); 
}
 
 int main()
 {
 	long long start,end,sum;
 	while(cin>>start>>end)
 		if(start<0 && end<0)
 			break;
		else
		{
			
			if(start) 
				sum = function(end)-function(start-1);
			else 
				sum = function(end);
			cout<<sum<<endl;
		}
	return 0;
 }
 

/*
#include<stdio.h>
#include<iostream>
using namespace std;
 
unsigned long long F(unsigned long long num)
{
	while(num && num%10==0)
		num/=10;
	return num%10;
}

unsigned long long function(unsigned long long start,unsigned long long end)
 {
 	unsigned long long result=0,i;
 	for(i=start;i<=end;i++)
 		result+=F(i);
 	return result;
 }
 
 int main()
 {
 	long long start,end;
 	while(cin>>start>>end)
 		if(start<0 && end<0)
 			break;
		else
			cout<<function(start,end)<<endl;
	return 0;
 }
 */