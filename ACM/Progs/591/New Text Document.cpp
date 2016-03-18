#include<stdio.h>
#include<math.h>
int s[60];
int main(){
	int f=0;
	freopen("in.txt","r",stdin);
	int a;
	while(scanf("%d",&a)==1){
		int i,sum=0;
		for(i=0;i<a;i++){
			scanf("%d",&s[i]);
			sum=sum+s[i];
		}
		int m=0,b=sum/a;
		for(i=0;i<a;i++){
			if(s[i]>b){
				m=m+s[i]-b;
			}
		}
		f++;
		printf("Set #%d\n",f);
		printf("The minimum number of moves is %d\n\n",m);
	}
	return 0;
}
