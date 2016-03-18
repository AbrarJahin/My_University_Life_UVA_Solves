#include<cstdio>
#include<iostream>
using namespace std;

int n,e,t1,t2,counter;
int edge[100][100],edge_r[100][100],node[100];
int pre[100],post[100];
int vis[100],vis_r[100];
int tpg_ord_stck[100],cnt;

void dfs(int node)
{
	int i,j;
	pre[node]=++counter;
	for(i=0;i<n;i++)
		{
			if(edge[node][i]==1)
			{
				//pre[i]=counter+1;
				if(!vis[i])
				{
				dfs(i);
				}
			}
		}
	vis[node]=2;
	tpg_ord_stck[++cnt]=node;
	post[node]=++counter;
}


int main()
{
	cout<<"No. of Node / Vertex : ";
	cin>>n;
	cout<<"No. of Edge : ";
	cin>>e;
	int i,j;
	for(i=0;i<e;i++)
		{
		cin>>t1>>t2;
		edge[t1][t2]=1;
		edge_r[t2][t1]=1;

		}
	for(i=0;i<n;i++)
	{
		if(!vis[i])
		{
		//pre[i]=counter+1;
		dfs(i);
		}
	}
	printf("pre : %d post : %d \n",pre[0],post[0]);
	printf("the topological ordering is : ");
	while(cnt>0)
	printf("%d ",tpg_ord_stck[cnt--]);
}
