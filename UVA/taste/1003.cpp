#include<stdio.h>

void mat_rotate(int mat_size,int mat[][]);

int main()
{
	int mat[10][10],cpy[10][10],i,j,k,mat_siz,rotate,rot_temp;
	scanf("%d",&mat_siz);
	for(i=0;i<mat_siz;i++)
	{
		for(j=0;j<mat_siz;j++)
		{
			scanf("%d",&mat[i][j]);
			cpy[i][j]=mat[i][j];
		}
	}
	scanf("%d",rotate);
	rot_temp=rotate/4;
	rotate=	rotate%4;
	for(i=0;i<mat_siz;i++)
	{
		for(j=0;j<mat_siz;j++)
		{
			cpy[i][j]=mat[i][j]*rot_temp;
		}
	}
	for(i=0;i<mat_siz;i++)
	    for(k=0;k<rotate;k++)
	    {
    		mat_rotate(mat_siz,mat[mat_siz][mat_siz]);
    		for(i=0;i<mat_siz;i++)
    		{
    			for(j=0;j<mat_siz;j++)
    			{
    				cpy[i][j]=+mat[i][j];
    			}
    		}
         }
    
                                                                                                                                                                                                                            	}
	for(i=0;i<mat_siz;i++)
	{
		for(j=0;j<mat_siz;j++)
		{
			printf("%d\t",cpy[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void mat_rotate(int mat_size,int mat[][])
{
	int rotate[10][10],i;
	for(i=0;i<mat_size;i++)
	{
		for(j=0;j<mat_size;j++)
		{
			rotate[i][j]=mat[i][j];
		}
	}
	for(i=0;i<mat_size;i++)
	{
		for(j=0;j<mat_siz;j++)
		{
			mat[i][j]=rotate[j][i];
		}
	}
}
