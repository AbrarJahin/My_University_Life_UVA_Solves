/*
	108 - Maximum Sum
*/


/*
	Algo=>
		Explanation

	    First, calculate the vertical prefix sum for all columns (an O(n2) algorithm).
	    Second, assume that the maximum sub-array will be between row a and row b, inclusive. There are only O(n2) a, b pairs such that
			a < b. Try each of them.
	    Since we already have the vertical prefix sum for all columns, the sum of elements in arr[a..b][c] for column c can be computed
			in O(1) time. This allows us to imagine each column sum as if it is a single element of a one-dimensional array across all
				columns (one dimensional array with one row and n columns).
	    There's an O(n) algorithm to compute the maximum sub-array for a one-dimensional array, known as Kadane's Algorithm.
	    Applying the Kadane's algorithm inside each a and b combination gives the total complexity of O(n3).
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
using namespace std;

#define Dif(i,j,k) (Table[i+k][j] - Table[i][j])
#define MAXN 110

int N, MAX;
int Table[MAXN][MAXN];

void ReadCase()
 {
   int i, j;
   for(i = 1; i<=N; i++)
           for(j  = 0; j<N; j++)
                   scanf("%d",&Table[i][j]);         
}

void Cal()
{
   int i, j, k, t;
   for(i = 1; i<=N; i++)
   {
           for(j = 0; j<N; j++)
                  Table[i][j] =  Table[i][j] + Table[i-1][j];
   }

   MAX = Table[1][0];
   for(k = 1; k<=N; k++)
   {
           for(i = 0; i<=N-k; i++)
           {
                    for(t = 0, j = 0; j<N; j++)
                   {
                          if(t>=0)
                                  t+= Dif(i,j,k);
                          else
                                  t = Dif(i,j,k);
                          if(t>MAX)
                                  MAX = t;
                   }
           }
   }               
   printf("%d\n",MAX); 
}

void FREE()
{
   int i, j;
   for(i = 0; i<=N; i++)
           for(j = 0; j<=N; j++)
                   Table[i][j] = 0;
}

int main()
{
    int f = 0; 
        while(scanf("%d",&N) == 1)
        {
           if(f++)
                 FREE();
           ReadCase();
           Cal();         
        }
        return 0;
}