/*
	10189 - Minesweeper
*/

#include<stdio.h>
#include<iostream>
#include<string.h>
#define MAX 101
using namespace std;

int main()
{
	int M,N,i,j,T=0,total_mines_around;
	char arr[MAX][MAX];
	while(cin>>M>>N)
	{
		if(M==0 && N==0)
			break;
		if(T)
			cout<<endl;
		for(i=0;i<M;i++)				//input
			cin>>arr[i];
		for(i=0;i<M;i++)
			for(j=0;j<N;j++)
			{
				if(arr[i][j]!='*')
				{
					total_mines_around=0;
					if(i>0)
					{
						if(j>0)
							if(arr[i-1][j-1]=='*')
								total_mines_around++;
						if(arr[i-1][j]=='*')
							total_mines_around++;
						if(j<N-1)
							if(arr[i-1][j+1]=='*')
								total_mines_around++;
					}
					//i==i
					if(j>0)
						if(arr[i][j-1]=='*')
							total_mines_around++;
					if(j<N-1)
						if(arr[i][j+1]=='*')
							total_mines_around++;
					if(i<M-1)
					{
						if(j>0)
							if(arr[i+1][j-1]=='*')
								total_mines_around++;
						if(arr[i+1][j]=='*')
							total_mines_around++;
						if(j<N-1)
							if(arr[i+1][j+1]=='*')
								total_mines_around++;
					}
					arr[i][j]=total_mines_around+'0';
				}
			}
		cout<<"Field #"<<++T<<":\n";	//output
		for(i=0;i<M;i++)
			cout<<arr[i]<<endl;
	}
	return 0;
}