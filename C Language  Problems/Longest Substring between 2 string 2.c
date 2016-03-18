/*
		A programme for finding largest substring
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str1[200],str2[200],temp[200]="",ans[200]="";
	int i,j;
	gets(str1);
	gets(str2);

	for(i=1;i<200 && str1[i];i++)
	{
		j=0;
		while(str1[i+j]==str1[i+j-1]+1)
		{
			j++;
			temp[j-1]=str1[i+j-2];
			temp[j]=str1[i+j-1];
		}
		temp[j+1]='\0';
		i+=j;
		if(strlen(temp)>strlen(ans))
		{
			strcpy(ans,temp);
		}
	}

	for(i=1;i<200 && str1[i];i++)
	{
		j=0;
		while(str2[i+j]==str2[i+j-1]+1)
		{
			j++;
			temp[j-1]=str2[i+j-2];
			temp[j]=str2[i+j-1];
		}
		temp[j+1]='\0';
		i+=j;
		if(strlen(temp)>strlen(ans))
		{
			strcpy(ans,temp);
		}
	}



	printf("\n\n\tLargest sequal Substring is : %s",ans);
	getch();
	return 0;
}