#include<stdio.h>
#include<string.h>

float num(char *p){
	int i;
	float n=0;
	int ten=1;
	int l=strlen(p);
	for(i=l;i>0;i--){
		n=n+(p[i-1]-'0')*ten;
		ten=ten*10;
	}

	return n;
}


char time[10];

int main(){
	char H[2];
	char M[2];
	int i,j;
	float h,m;
	float a;

	while(gets(time)){
		
		for(i=0;time[i]!=':';i++){
			H[i]=time[i];
		}

		H[i]=NULL;
		i++;

		for(j=0;time[i]!=NULL;i++,j++){
			M[j]=time[i];
		}
		M[j]=NULL;


		h=num(H);
		m=num(M);

		if(h==0 && m== 0)break;

		h=h*30+(m/2);
		m=m*6;

		if((m-h)<=180)a=m-h;
		if((m-h)>180)a=360-m+h;
		if((m-h)<0 && (m-h)>=-180)a=h-m;
		if((m-h)<-180)a=360-h+m;
		

		printf("%.3f\n",a);
	}

	return 0;
}



