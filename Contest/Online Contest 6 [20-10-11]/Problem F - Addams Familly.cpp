#include<iostream>
using namespace std;
#define MAX_SIZE 10
int main()
{
	int arr[MAX_SIZE][MAX_SIZE],ans[MAX_SIZE][MAX_SIZE],size,rotate;
	while(1)
	{
		int i,j;
		cin>>size;
		for(i=0;i<size;i++)
			for(j=0;j<size;j++)
			{
				cin>>arr[i][j];
				ans[i][j]=0;
			}
		cin>>rotate;
		for(i=0;i<size;i++)
			for(j=0;j<size;j++)
			{
				ans[i][j]=(rotate/4)*(arr[i][j]+arr[j][i]+arr[size-i-1][size-j-1]+arr[size-j-1][i]);
				if(rotate%4==1)
					ans[i][j]+=arr[i][size-j-1];
				else if(rotate%4==2)
						ans[i][j]+=(arr[size-i-1][size-j-1]);
				else if(rotate%4==3)
					ans[i][j]+=(arr[size-j-1][i]);
				ans[i][j]+=arr[i][j];
			}
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				cout<<ans[i][j];
				if(j!=size-1)
					cout<<" ";
			}
			if(i==size-1)
				cout<<" ";
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}