/*///////////////////////////////////////////////////////////////////
	A programme for solving UVA problem Set Problem no 105
	#The Skyline Problem#
	@Piash
	Date = 30-03-2011
	(c)v.1
///////////////////////////////////////////////////////////////////*/

#include<stdio.h>
# 
int main()
{
    int L[8],H[8],R[8],i,j,temp_l,c,temp_r,highest=0;
    for(i=0;i<8;i++)
    {
         scanf("%d %d %d",&L[i],&H[i],&R[i]);
         if(highest<R[i])
         {
                highest=R[i];
         }
    }
    //while(highest)
    {
         for(i=0;i<8;i++)
         {
               temp_l=L[i];
               for(j=0;j<8;j++)
               {
                     if(temp_l>L[j])
                     {
                           temp_l=L[j];
                           temp_h=H[j];
                     }
                     if(temp_l>R[j])
                     {
                           temp_l=L[j];
                           temp_h=H[j];
                     }
               }
               printf("%d ",temp_l,temp_h);
               temp_l=0;
               
         }
    }
}
