/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	A programme for solving UVA 1201 - Taxi Cab Scheme
	problem = http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=247&page=show_problem&problem=3642
	link => http://paste.ubuntu.com/1065846/
	Answer => http://stackoverflow.com/q/11497702/1321922
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include<stdio.h>
#include<iostream>
#define MAX 505
using namespace std;



//////////////////////////////////////////////////////////////						Structures Used here
typedef struct tag1
{
	int starting_hour,starting_min,ending_hour,ending_min;
}Taxi_Cab;

typedef struct tag2
{
	int ending_hour,ending_min;
}Taxi_Cab_Needed;
//////////////////////////////////////////////////////////////



int mod (int x, int y)
{
	if(x>y)
		return x-y;
	return y-x;
}

int find_minum_value_position(Taxi_Cab_Needed T[], int total_number_of_taxi_used)
{
	int min_position=0;
	for(int i=1;i<total_number_of_taxi_used;i++)
	{
		if(T[min_position].ending_hour>T[i].ending_hour)
			min_position=i;
		else if(T[min_position].ending_hour==T[i].ending_hour && T[min_position].ending_min>T[i].ending_min)
			min_position=i;
	}
	return min_position;
}

int find_menimum_number_of_taxi_needed(Taxi_Cab Taxy[],int total_number_of_taxi)
{
	int total_number_of_taxi_used=(total_number_of_taxi>0),min_pos,i,dead_taxy=0;
	Taxi_Cab_Needed T[MAX];
	for(i=0;i<total_number_of_taxi;i++)
	{
		T[i].ending_min=-1000;
		T[i].ending_hour=-1000;
	}
	for(i=0;i<total_number_of_taxi;i++)
	{
		min_pos=find_minum_value_position(T,total_number_of_taxi_used);
		if(Taxy[i].starting_hour>T[min_pos].ending_hour)
		{
			T[min_pos].ending_hour=Taxy[i].ending_hour;
			T[min_pos].ending_min=Taxy[i].ending_min;
			if(T[min_pos].ending_hour>23)
			{
				dead_taxy++;
				T[total_number_of_taxi_used-1].ending_hour=-1000;
				T[total_number_of_taxi_used-1].ending_min=-1000;
			}
		}
		else if(Taxy[i].starting_hour==T[min_pos].ending_hour && Taxy[i].starting_min>T[min_pos].ending_min)
		{
			T[min_pos].ending_hour=Taxy[i].ending_hour;
			T[min_pos].ending_min=Taxy[i].ending_min;
			if(T[min_pos].ending_hour>23)
			{
				dead_taxy++;
				T[total_number_of_taxi_used-1].ending_hour=-1000;
				T[total_number_of_taxi_used-1].ending_min=-1000;
			}
		}
		else
		{
			total_number_of_taxi_used++;
			T[total_number_of_taxi_used-1].ending_hour=Taxy[i].ending_hour;
			T[total_number_of_taxi_used-1].ending_min=Taxy[i].ending_min;
			if(T[total_number_of_taxi_used-1].ending_hour>23)
			{
				dead_taxy++;
				T[total_number_of_taxi_used-1].ending_hour=-1000;
				T[total_number_of_taxi_used-1].ending_min=-1000;
			}
		}
		if(T[min_pos].ending_hour>23)
			dead_taxy++;
	}
	return total_number_of_taxi_used+dead_taxy;
}

int main()
{
	int T,temp;
	Taxi_Cab Taxy[MAX];
	char c;
	cin>>T;
	while(T--)
	{
		int total_input;
		cin>>total_input;
		for(int i=0;i<total_input;i++)																//input taken hare
		{
			int starting_X,starting_Y,ending_X,ending_Y;
			scanf("%d%c%d %d %d %d %d",&Taxy[i].starting_hour,&c,&Taxy[i].starting_min,&starting_X,&starting_Y,&ending_X,&ending_Y);
			temp = mod(starting_X,ending_X) + mod(ending_Y,starting_Y);								//finding ending time
			Taxy[i].ending_hour=Taxy[i].starting_hour+(temp+Taxy[i].starting_min)/60;
			Taxy[i].ending_min=(temp+Taxy[i].starting_min)%60;
		}
		cout<<find_menimum_number_of_taxi_needed(Taxy,total_input)<<endl;
	}
	return 0;
}
