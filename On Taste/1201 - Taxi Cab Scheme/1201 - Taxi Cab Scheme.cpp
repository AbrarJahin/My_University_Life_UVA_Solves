#include<iostream>
#include<cmath>
using namespace std;
#define MAX 501

typedef struct tag
{
	int hour,minute,a,b,c,d;
}passengers;

int mod(int a, int b)
{
	if(a>b)
		return a-b;
	return b-a;
}

int time_needed(passengers a)
{
	return mod(a.a,a.c)+mod(a.b,a.d);
}

int time_difference(passengers a, passengers b)
{
	return (mod(a.hour,b.hour)*60+mod(a.minute,b.minute));
}

int main()
{
	int tast_senirio,M,booked_taxy_rider,no_of_taxy_needed,no_of_taxy_returned;
	passengers passenger[MAX];
	cin>>tast_senirio;
	while(tast_senirio--)
	{
		int i;
		cin>>M;
		booked_taxy_rider=0;
		no_of_taxy_returned=0;
		for(i=0;i<M;i++)
		{
			char time[6];
			cin>>time>>passenger[i].a>>passenger[i].b>>passenger[i].c>>passenger[i].d;
			passenger[i].hour=(time[0]-48)*10+time[1];
			passenger[i].minute=(time[2]-48)*10+time[3];
		}
		
		int time_need,time_diff=0;
		time_need=time_needed(passenger[0]);
		booked_taxy_rider++;
		for(i=1;i<M;i++)
		{
			time_need=time_needed(passenger[i]);
			time_diff=time_difference(passenger[i],passenger[i-1]);
			if(time_diff>time_need)
			{
				//no_of_taxy_returned--;
				//no new driver needed
				//if again return to new position then some more calculations needed hear
			}
			else
			{
				booked_taxy_rider++;
			}
		}
	}
	return 0;
}
