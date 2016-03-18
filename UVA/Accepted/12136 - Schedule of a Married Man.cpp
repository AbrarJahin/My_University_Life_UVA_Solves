/*
	12136 - Schedule of a Married Man
*/

#include <stdio.h>

struct x
{
	int a[8];
	int sum[4];
	char c[4];
}t;



int main()
{
	int n,i,k;
	scanf("%d",&n);
	getchar();
	
	for(i=1;i<=n;i++)
	{
		scanf("%d%c%d %d%c%d",&t.a[0],&t.c[0],&t.a[1],&t.a[2],&t.c[1],&t.a[3]);
		t.sum[0]=(t.a[0]*60)+t.a[1];
		t.sum[1]=(t.a[2]*60)+t.a[3];
		if(t.sum[0]>t.sum[1])
		{
			k=t.sum[0];
			t.sum[0]=t.sum[1];
			t.sum[1]=k;
		}
		scanf("%d%c%d %d%c%d",&t.a[4],&t.c[2],&t.a[5],&t.a[6],&t.c[3],&t.a[7]);
		t.sum[2]=(t.a[4]*60)+t.a[5];
		t.sum[3]=(t.a[6]*60)+t.a[7];
		if(t.sum[1]<t.sum[2] || t.sum[3]<t.sum[0])
			printf("Case %d: Hits Meeting\n",i);
		else
			printf("Case %d: Mrs Meeting\n",i);
	
	}
	return 0;
}