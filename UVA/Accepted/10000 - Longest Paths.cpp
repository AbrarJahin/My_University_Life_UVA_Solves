/*
	UVa 10000 - Longest Paths 
*/

#include <stdio.h>
char map[200][200];
int dp[200][200];
int max(int a,int b)
{
    return(a>b)?a:b;
}
int length(int s,int t,int n)
{
    if(dp[s][t]!=-1)
        return dp[s][t];
    else
    {
        int maximum = -1;
        int i;
        for(i=1;i<=n;i++)
            if(map[s][i])
                maximum = max(maximum,1+length(i,t,n));
        return dp[s][t]=maximum;
    }
}
int main()
{
    int n,a,b,i,s,j,best,m,c;
    c = 1;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&s);
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            {
                map[i][j]=0;
                dp[i][j]=-1;
            }
            dp[i][i]=0;
        }
        scanf("%d %d",&a,&b);
        while(a||b)
        {
            map[a][b]=1;
            scanf("%d %d",&a,&b);
        }
        m = -1;
        best = 0;
        for(i=1;i<=n;i++)
            if(length(s,i,n)>m)
            {
                m = length(s,i,n);
                best = i;
            }
        printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",c++,s,m,best);
        scanf("%d",&n);
    }
    return 0;
}

/*
//TLE found
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
#define MAX 102
bool mat[MAX][MAX],if_back_track_starts;
int longest_path,finishing_point;

int FindLongestPath(int n,int start)
{
	int longest_path_temp=0,flag=1,i=start,j;
	while(flag)
	{
		if(flag==1)
		{
			j=0;
			flag=2;
		}
		while(!mat[i][++j])		//to find 1 in row
			if(j>n)
				break;
		if(mat[i][j])
		{
			longest_path_temp=FindLongestPath(n,j)+1;
			if_back_track_starts=true;
			if(longest_path<longest_path_temp)
			{
				longest_path=longest_path_temp;
			}
		}
		else
		{
			if(!if_back_track_starts)
					finishing_point=i;
			flag=0;
		}
	}
	return longest_path_temp;
}

int main()
{
	int n,case_number=1;
	while(cin>>n)
	{
		if(n==0)
			break;
		int s;
		cin>>s;			//starting point
		int p,q;
		memset(mat,false,sizeof(mat));				//ste all value of mat==0
		while(cin>>p>>q)
		{
			if(p==0 && q==0)
				break;
			mat[p][q]=true;
		}
		if_back_track_starts=false;
		longest_path=finishing_point=0;
		FindLongestPath(n,s);
		cout<<"Case "<<case_number++<<": The longest path from "<<s<<" has length "<<longest_path<<", finishing at "<<finishing_point<<".\n";
	}
	return 0;
}*/