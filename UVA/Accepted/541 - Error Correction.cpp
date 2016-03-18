/*
	541 - Error Correction
	problem : http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=482
*/

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define MAX 101

int main()
{
	bool mat[MAX][MAX];
	int mat_size;
	while(cin>>mat_size)
	{
		bool flag=true;
		int total_error,row,collum,change_row,change_collum;
		total_error=0;
		if(!mat_size)
			break;
		for(row=0;row<mat_size;row++)											//input
			for(collum=0;collum<mat_size;collum++)
				cin>>mat[row][collum];
		for(row=0;row<mat_size;row++)					//chk for find row
		{
			flag=true;
			for(collum=0;collum<mat_size;collum++)
			{
				if(mat[row][collum])
					if(flag)
						flag=false;
					else
						flag=true;
			}
			if(!flag)
			{
				change_row=row;
				total_error++;
				if(total_error>1)
					break;
			}
		}
		if(total_error>1)
			cout<<"Corrupt\n";
		else
		{
			total_error=0;
			for(row=0;row<mat_size;row++)					//chk for find row
			{
				flag=true;
				for(collum=0;collum<mat_size;collum++)
				{
					if(mat[collum][row])
						if(flag)
							flag=false;
						else
							flag=true;
				}
				if(!flag)
				{
					change_collum=row;
					total_error++;
					if(total_error>1)
						break;
				}
			}
			if(total_error==0)
				cout<<"OK\n";
			else if(total_error>1)
				cout<<"Corrupt\n";
			else
				cout<<"Change bit ("<<change_row+1<<","<<change_collum+1<<")\n";				///////////////////
		}
	}
	return 0;
}