/*
	12019 - Doom's Day Algorithm
	problem = http://uva.onlinejudge.org/external/120/12019.html
*/

//#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
	int T,month,day,total_day_of_year;
	cin>>T;
	while(T--)
	{
		total_day_of_year=0;
		cin>>month>>day;
		if(month==1)
			total_day_of_year=day%32;
		else if(month==2)
			total_day_of_year=day%29+31;
		else if(month==3)
			total_day_of_year=day%32+59;
		else if(month==4)
			total_day_of_year=day%31+90;
		else if(month==5)
			total_day_of_year=day%32+120;
		else if(month==6)
			total_day_of_year=day%31+151;
		else if(month==7)
			total_day_of_year=day%32+181;
		else if(month==8)
			total_day_of_year=day%32+212;
		else if(month==9)
			total_day_of_year=day%31+243;
		else if(month==10)
			total_day_of_year=day%32+273;
		else if(month==11)
			total_day_of_year=day%31+304;
		else if(month==12)
			total_day_of_year=day%32+334;

		total_day_of_year%=7;						//1-1-11 is saturday
		if(total_day_of_year==1)
			cout<<"Saturday\n";
		else if(total_day_of_year==2)
			cout<<"Sunday\n";
		else if(total_day_of_year==3)
			cout<<"Monday\n";
		else if(total_day_of_year==4)
			cout<<"Tuesday\n";
		else if(total_day_of_year==5)
			cout<<"Wednesday\n";
		else if(total_day_of_year==6)
			cout<<"Thursday\n";
		else if(total_day_of_year==0)
			cout<<"Friday\n";
	}
	return 0;
}