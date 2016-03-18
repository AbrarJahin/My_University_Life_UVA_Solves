#include<stdio.h>
//#include<string.h>

int main()
{
	int taste_case,arr[1000],arr_size,swap_number,i,j,temp;
	scanf("%d",&taste_case);
	while(taste_case--)
	{
		scanf("%d",&arr_size);
		for(i=0;i<arr_size;i++)
		{
			scanf("%d",(arr+i));
		}
		swap_number=0;
		for(i=0;i<arr_size;i++)
			for(j=0;j<arr_size-1-i;j++)
				if(arr[j+1]<arr[j])
				{
					swap_number++;
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
		printf("Optimal train swapping takes %d swaps.\n",swap_number);
	}
	return 0;
}
