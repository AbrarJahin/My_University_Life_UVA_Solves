#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,j,k;
	char str1[200],str2[200],ans[200]="",temp[200]="";
	gets(str1);
	gets(str2);
	for(i=0;i<200 && str1[i];i++)
	{
		k=0;
		for(j=0;j<200 && str2[j];j++)
		{
			while(str1[i+k]==str2[j+k])
			{
				temp[k]=str1[i+k];
				k++;
			}
			j+=k;
			if(strlen(temp)>strlen(ans))
				strcpy(ans,temp);
		}
	}
	printf("\n\tLongest substring : %s",ans);
	getch();
	return 0;
}