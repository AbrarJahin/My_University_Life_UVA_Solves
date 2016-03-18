#include<stdio.h>
#include<math.h>
int a[9];
int main(){
	while(scanf("%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8])==9){
		int i;
		for(i=0;i<9;i++){
			if(a[i]!=0)break;
			if(i==8&&a[i]==0)printf("0");
		}
		int k;
		if(a[i]==1)printf("x^%d",8-i);
		else if(a[i]==-1)printf("-x^%d",8-i);
			else printf("%dx^%d",a[i],8-i);
		for(k=i+1;k<7;k++){
			if(a[k]==1)printf(" + x^%d",8-k);
			if(a[k]==-1)printf(" - x^%d",8-k);
			if(a[k]>1)printf(" + %dx^%d",a[k],8-k);
			if(a[k]<-1)printf(" - %dx^%d",a[k]*-1,8-k);

		}
		if(a[7]==1)printf(" + x");
		else if(a[7]==-1)printf(" - x");
		else if(a[7]>1)printf(" + %dx",a[7]);
		else if(a[7]<-1)printf(" - %dx",a[7]*-1);
		if(a[8]>0)printf(" + %d",a[8]);
		else if(a[8]<0)printf(" - %d",a[8]*-1);
	}

	return 0;
}