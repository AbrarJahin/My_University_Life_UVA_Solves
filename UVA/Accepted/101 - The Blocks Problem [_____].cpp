/*
	UVA 101 - The Blocks Problem
*/

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<cassert>
#include<climits>
using namespace std;

#define REP(i,n) for(int i=0, _e(n); i<_e; i++)
#define FOR(i,a,b) for(int i(a), _e(b); i<=_e; i++)
#define FORD(i,a,b) for(int i(a), _e(b); i>=_e; i--) 
#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)
#define SET(t,v) memset((t), (v), sizeof(t))
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize( unique( ALL(c) ) - (c).begin() )

#define sz size()
#define pb push_back
#define VI vector<int>
#define VS vector<string>

typedef long LL;			//typedef long long LL
typedef long double LD;
typedef pair<int,int> pii;

#define D(x) if(1) cout << __LINE__ <<" "<< #x " = " << (x) << endl;
#define D2(x,y) if(1) cout << __LINE__ <<" "<< #x " = " << (x) \
     <<", " << #y " = " << (y) << endl;

int G[30][30];
int pos[30];
vector<int> store;
string cmd1, cmd2;
int src, dst, N;

int getY(int x, int val) {
        REP(i, N) {
                if (G[x][i] == val) return i;
        }
}

void removeUpperElement(int x, int y) {
        while(G[x][y] != -1) {
                int v = G[x][y]; G[x][y] = -1;
                G[v][0] = v;
                pos[v] = v;
                y++;
        }       
}

void move(int src) {
        store.clear();

        int x = pos[src];
        int y = getY(x, src);

        store.pb(src);
        G[x][y] = -1;
        y++;

        removeUpperElement(x, y);
}
void pile(int src) {
        store.clear();

        int x = pos[src];
        int y = getY(x, src);

        while(G[x][y] != -1) {
                store.pb(G[x][y]);
                G[x][y] = -1;
                y++;
        }
}

void over(int dst) {
        int x = pos[dst];
        int y = getY(x, dst);

        while(G[x][y] != -1) y++;
        REP(i, store.size()) {
                G[x][y] = store[i];
                pos[store[i]] = x;
                y++;
        }
}
void onto(int dst) {
        int x = pos[dst];
        int y = getY(x, dst) + 1;

        removeUpperElement(x, y);
        REP(i, store.size()) {
                G[x][y] = store[i];
                pos[store[i]] = x;
                y++;
        }
}

int main() {
        scanf("%d", &N);

        memset(G, -1, sizeof(G));

        //initialize G and pos[]
        REP(i, N) G[i][0] = i, pos[i] = i;

        while(cin >> cmd1 && cmd1 != "quit") {
                cin >> src >> cmd2 >> dst;

                if (pos[src] == pos[dst]) continue;

                cmd1 == "move" ? move(src) : pile(src);
                cmd2 == "over" ? over(dst) : onto(dst);
        }

        REP(i, N)
		{
                printf("%d:", i);
                REP(j, N) {
                        if (G[i][j] == -1) break;
                        printf(" %d", G[i][j]);
                }
                printf("\n");
        }
        return 0;
}