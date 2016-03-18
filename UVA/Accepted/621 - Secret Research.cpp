/*
	UVA 621 - Secret Research
*/

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

char detector(char *input)
{
	if(!strcmp(input,"1") || !strcmp(input,"4") || !strcmp(input,"78"))		//positive result 		 S = 1 or S = 4 or S = 78
		return '+';															//		+ 		  for a positive result
	int length=strlen(input);
	if(input[length-1] == '5' && input[length-2] == '3')	//negative result 		 S = S35
		return '-';											//	- 		  for a negative result
	if(input[0] == '9' && input[length-1] == '4')		//experiment failed 		 S = 9S4 
		return '*';										//	* 		  for a failed experiment
					//experiment not completed 		 S = 190S
	return '?';		//	? 		  for a not completed experiment
}

int main()
{
	char string[10000];
	int T;
	cin>>T;
	while(T--)
	{
		cin>>string;
		cout<<detector(string)<<endl;
	}
	return 0;
}