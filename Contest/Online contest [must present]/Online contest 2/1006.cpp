#include<iostream>
using namespace std;

int find_move(long start_pt,long end_pt)
{
	int move=0;
	while(start_pt<end_pt)
	{
		move+=2;
		start_pt*=2;
		start_pt-=1;
	}
	if(start_pt==end_pt)
		return move;
	return move-1;
}

int main()
{
	long start_pt,end_pt;
	while(cin>>start_pt)
	{
		cin>>end_pt;
		cout<<find_move(start_pt,end_pt)<<endl;
	}
}