#include<stdio.h>
#include<math.h>
#include<string.h>
char s[10000000];

int main(){
	int in;
	freopen("in.txt","r",stdin);
	while(gets(s)){
		if((s[0]-48)==0)goto lebel;
		int i,p,a=1;
		int l=strlen(s);
		int sum=0;
		for(i=l-1;i>-1;i--){
			p=pow(2,a)-1;
			sum=sum+(s[i]-48)*p;
			a++;
		}
		printf("%d\n",sum);
	}
lebel:;
	return 0;
}