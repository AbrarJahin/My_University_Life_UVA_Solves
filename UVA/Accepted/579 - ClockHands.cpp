/*
	UVA 579 - ClockHands
*/


#include<stdio.h>
int main()
{
    float H,M,totalM,passh,passm,block;
    //freopen("in.txt","r",stdin);
    while(scanf("%f:%f",&H,&M)&&(H!=0||M!=0))
    {
        totalM=H*60 + M;
        passh = 5*totalM/60;
        if(passh > 60)
            passh=passh-60;
        passm = (int)totalM%60;
        block=(passh > passm)?(passh-passm)*6:(passm-passh)*6;
        if(block > 180)
            block=360-block;
        printf("%.3f\n",block);
    }
    return(0);
} 

/*
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

float ClockHandsAngle(int hour,int min)
{
	float angle=hour*30+((float)min/2)-6*min;
	if(angle<0)
		angle=-angle;
	if(angle>=180)
		return 360-angle;
	return angle;
}

int main()
{
	char time[5];
	while(cin>>time)
	{
		int hour,min,time_length=strlen(time);
		hour=time[time_length-4]-'0';
		if(time_length>4)
			hour+=(time[0]-'0')*10;
		min=(time[time_length-2]-'0')*10+time[time_length-1]-'0';
		if(hour==0 && min==0)
			break;
		printf("%.3f\n",ClockHandsAngle(hour,min));
	}
	return 0;
}
*/