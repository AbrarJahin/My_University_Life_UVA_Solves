#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

bool if_vowel(char ch)
{
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		return true;
	return false;
}

bool if_OK(char *arr,int size)
{
	bool if_vowel_exists=false;
	bool three_consucative[3]={0,1,0};
	char prev_latter='\0';
	for(int i=0;i<size;i++)
	{
		if(prev_latter==arr[i] && arr[i]!='e' && arr[i]!='o')
			return false;
		else
			prev_latter=arr[i];
		if(i%3==0)
		{
			three_consucative[0]=if_vowel(arr[i]);
		}
		else if(i%3==1)
		{
			three_consucative[1]=if_vowel(arr[i]);
		}
		else
		{
			three_consucative[2]=if_vowel(arr[i]);
		}
		if(three_consucative[0]==three_consucative[1] && three_consucative[1]==three_consucative[2])
			return false;
		if(!(if_vowel_exists))
		{
			if_vowel_exists=if_vowel(arr[i]);
		}
	}
	if(if_vowel_exists)
		return true;
	return false;
}

int main()
{
	char arr[100];
	while((scanf("%s",arr)))
	{
		int size=strlen(arr);
		if(!strcmp("end",arr))
			break;
		if(if_OK(arr,size))
			cout<<"<"<<arr<<"> is acceptable.";
		else
			cout<<"<"<<arr<<"> is not acceptable.";
		cout<<endl;
	}
	return 0;
}