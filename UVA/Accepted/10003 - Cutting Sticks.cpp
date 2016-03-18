/* 
		UVa ID: 10003 - Cutting Sticks
 */
 /*
#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))		//total a should set to 0
#define fill(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define pi acos(-1.0)
#define eps 1e-9
#define MAX 50+5

long dp[MAX][MAX],arr[50+5];
////////////////////////////////////
long min(long a, long b)
{
	if(a>b)
		return a;
	return b;
}
////////////////////////////////////
long func(int a,int b)
{
    long cost,minimum;
    if(b-a==1)
		return 0;
    if(dp[a][b]!=-1)		//no need
		return dp[a][b];
    minimum=100000000;
    for(int i=a+1;i<b;i++)
    {
        cost=func(a,i)+func(i,b)+arr[b]-arr[a];
        minimum=min(cost,minimum);
    }
    return dp[a][b]=minimum;
}

int main()
{
    long l,n;
    while(cin>>l)
    {
        if(l==0)
			break;
        cin>>n;
        fill(dp,-1);	//memset to -1
        arr[0]=0;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        arr[n+1]=l;
        long mc=func(0,n+1);
        cout<<"The minimum cutting is "<<mc<<"."<<endl;
    }
return 0;
}
*/


#include <iostream>

#define MAXINT 9999999
#define NCUTS 50

using namespace std;

int main() {
    int len; // lenght of the stick to be cut
    int nc; // number of cuts to be made
    int places[NCUTS+2]; // places where cuts have to be done
    int mincost[NCUTS+2][NCUTS+2]; //minimum cost of cutting the given stick
        
    while((cin >> len) && (len != 0)) {
        cin >> nc;
                
        for(int i=0; i<nc; i++) {
            cin >> places[i+1];
        }
        
        places[0] = 0;
        nc++;
        places[nc] = len;
                
        for(int i=0; i<=NCUTS+1; i++) {
            for(int j=0;j<=NCUTS+1;j++) {
                mincost[i][j] = MAXINT;
            }
        }
        
        for(int i=0; i<=nc; i++) {
            mincost[i][i] = 0;
            mincost[i][i+1] = 0;
            mincost[i][i+2] = places[i+2] - places[i];
        }

        for(int k=3; k<=nc; k++) {
            for(int i=0; i<=nc-k; i++) {
                for(int j=i+1; j<=i+k-1; j++) {
                    if((mincost[i][j] + mincost[j][i+k] + places[i+k] - places[i]) < mincost[i][i+k]) {
                        mincost[i][i+k] = mincost[i][j] + mincost[j][i+k] + places[i+k] - places[i];
                    }
                }
            }
        }
        
        cout << "The minimum cutting is "<< mincost[0][nc] << "." << endl;
    }
}