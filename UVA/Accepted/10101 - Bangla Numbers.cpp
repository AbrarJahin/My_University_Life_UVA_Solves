/*
	UVA -> 10101 - Bangla Numbers
	problem linK => http://uva.onlinejudge.org/external/101/10101.html
*/
/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char num[20];
	int input_counter=0,num_length,i;
	bool flag=true;
	while(cin>>num)
	{
		int flag=0;
		cout<<++input_counter<<". ";
		num_length=strlen(num);
		i=0;
		//	999999999999999=> 9 kuti 99 lakh 99 hajar 9 shata 99 kuti 99 lakh 99 hajar 9 shata 99
		flag=false;
		while(num_length-i>14)
		{
			if(num[i++]>'0' || flag)
			{
				cout<<num[i-1];
				flag=true;
			}
		}
		if(num_length>14 && flag)
			cout<<" kuti ";
		flag=false;
		while(num_length-i>12)
		{
			if(num[i++]>'0' || flag)
			{
				cout<<num[i-1];
				flag=true;
			}
		}
		if(num_length>12 && flag)
			cout<<" lakh ";
		flag=false;
		while(num_length-i>10)
		{
			if(num[i++]>'0' || flag)
			{
				cout<<num[i-1];
				flag=true;
			}
		}
		if(num_length>10 && flag)
			cout<<" hajar ";
		flag=false;
		while(num_length-i>9)
		{
			if(num[i++]>'0' || flag)
			{
				cout<<num[i-1];
				flag=true;
			}
		}
		if(num_length>9 && flag)
			cout<<" shata ";
		flag=false;
		while(num_length-i>7)
		{
			if(num[i++]>'0' || flag)
			{
				cout<<num[i-1];
				flag=true;
			}
		}
		if(flag)
			cout<<" ";
		if(num_length>7)
			cout<<"kuti ";
		flag=false;
		while(num_length-i>5)
		{
			if(num[i++]>'0' || flag)
			{
				cout<<num[i-1];
				flag=true;
			}
		}
		if(num_length>5 && flag)
			cout<<" lakh ";
		flag=false;
		while(num_length-i>3)
		{
			if(num[i++]>'0' || flag)
			{
				cout<<num[i-1];
				flag=true;
			}
		}
		if(num_length>3 && flag)
			cout<<" hajar ";
		flag=false;
		while(num_length-i>2)
		{
			if(num[i++]>'0' || flag)
			{
				cout<<num[i-1];
				flag=true;
			}
		}
		if(num_length>2 && flag)
			cout<<" shata ";
		flag=false;
		while(num_length-i>0)
		{
			if(num[i++]>'0' || flag)
			{
				cout<<num[i-1];
				flag=true;
			}
		}
		cout<<endl;
	}
	return 0;
}*/

#include<cstdio>
int main()
{
    long long  int n,a,b,c,d,e,f,g,h,i,j,k,l,m,o,p,q,r,s;
    int count=0;
    while (scanf("%lld",&n)==1)
    {
        count++;
        printf("%4d.",count);
        b=n/100000000000000;
        if (b>0)
            printf(" %lld kuti",b);
        c=n%100000000000000;
        d=c/1000000000000;
        if (d>0)
            printf(" %lld lakh",d);
        e=c%1000000000000;
        f=e/10000000000;
        if (f>0)
            printf(" %lld hajar",f);
        g=e%10000000000;
        h=g/1000000000;
        if (h>0)
            printf(" %lld shata",h);
        i=g%1000000000;
        j=i/10000000;
        if (j==0&&n>10000000)
            printf(" kuti");
        if (j>0)
            printf(" %lld kuti",j);
        k=i%10000000;
        l=k/100000;
        if (l>0)
            printf(" %lld lakh",l);
        m=k%100000;
        o=m/1000;
        if (o>0)
            printf(" %lld hajar",o);
        p=m%1000;
        q=p/100;
        if (q>0)printf(" %lld shata",q);
        r=p%100;
        s=r/1;
        if (s>0)
            printf(" %lld",s);
        if (n==0)
            printf(" %lld",n);
        printf("\n");
    }
    return 0;
}