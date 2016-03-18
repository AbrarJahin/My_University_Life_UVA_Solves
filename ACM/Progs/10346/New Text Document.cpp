#include<stdio.h>

int main(){

	int n,k;

	while(scanf("%d %d",&n,&k)==2){

		int num=n;

		int butt=0;

		while(n>=
			k){
			
			num=num+(n)/k;
			butt=n%k;
			n=n/k+butt;
		}

		printf("%d\n",num);
	}

	return 0;
}