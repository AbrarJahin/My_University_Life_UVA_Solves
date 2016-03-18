/*
	344 - Roman Digititis
*/

#include<iostream>
#define MAX 101
using namespace std;

int arr[5][MAX];

int mod(int i,int j)
{
	if(i>j)
		return i-j;
	return
		j-i;
}

void calculate(void)	//``i", ``v", ``x", ``l", and ``c" represent the decimal values 1, 5, 10, 50, and 100 respectively
{
	int j,temp,unit;
	for(int i=0;i<5;i++)			//0=>i-1 , 1=>v-5 , 2=>x-10 , 3=>l-50 , 4=>c-100 
		for(j=0;j<MAX;j++)
			arr[i][j]=0;
	for(j=1;j<=MAX;j++)
	{
		temp=j;
		//for c
		arr[4][j]=(int)(temp>89)+arr[4][j-1];
		if(temp>89)
			temp=mod(100,temp);
		if(j>91 && j<100)			//special condition is 42-49 & 92-99	// for detail =>http://www.enchantedlearning.com/math/romannumerals/
			temp=20-temp;
		//for l
		arr[3][j]=(int)(temp>39)+arr[3][j-1];
		if(temp>39)
			temp=mod(50,temp);
		if(j>41 && j<50)		//special condition is 42-49 & 92-99		// for detail =>http://www.enchantedlearning.com/math/romannumerals/
			temp=20-temp;
		//for x
		unit=0;
		if(temp>8)
		{
			unit=temp/10+(int)(temp%10>8);
			temp=mod(unit*10,temp);
		}
		arr[2][j]=unit+arr[2][j-1];
		//for v
		arr[1][j]=((int)(temp>3)+arr[1][j-1]);
		if(temp>3)
			temp=mod(5,temp);
		//for i
		arr[0][j]=temp+arr[0][j-1];
	}
}

int main()
{
	int input;
	calculate();
	while(cin>>input && input)
		cout<<input<<": "<<arr[0][input]<<" i, "<<arr[1][input]<<" v, "<<arr[2][input]<<" x, "<<arr[3][input]<<" l, "<<arr[4][input]<<" c\n";
	return 0;
}