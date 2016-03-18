#include<iostream>
#include<string>
using namespace std;


class big_number																//Way=>> number=56123, [0]=3,[1]=2,[2]=3,[3]=6,[4]=5 || no_of_digit=5
{
	char *digit;
	unsigned  long no_of_digit;
public:
	big_number()
	{
		digit=NULL;
		no_of_digit=0;
	}
	
	big_number(long int x)
	{
		digit=NULL;
		no_of_digit=0;
		long int temp=x;
		while(temp)
		{
			no_of_digit++;
			temp/=10;
		}
		digit=new char[no_of_digit];
		while(x)
		{
			*(digit+temp++)=48+x%10;
		}
	}
	
	big_number(char *x)
	{
		digit=NULL;
		no_of_digit=strlen(x);
		digit=new char[no_of_digit];
		int temp=0;
		while(x)
		{
			*(digit+temp++)=*(x+temp);											//?????????????????????????????
		}
	}
	
	big_number(char *x,int digit_no)
	{
		digit=NULL;
		no_of_digit=digit_no;
		digit=new char[no_of_digit];
		int temp=0;
		while(temp<digit_no)
		{
			*(digit+temp++)=*(x+temp);											//?????????????????????????????
		}
	}
	
	unsigned long get_no_of_digit()
	{
		return no_of_digit;
	}
	
	char *get_num()
	{
		return digit;
	}
	
	big_number big_number::operator+(big_number x)
	{
		int i=-1,in_hand=0;
		big_number temp;
		//temp.no_of_digit=((x.no_of_digit>no_of_digit)?(x.no_of_digit:no_of_digit))+1;	//??????????????????????????????
		if(x.no_of_digit>no_of_digit)
			temp.no_of_digit=1+x.no_of_digit;
		else
			temp.no_of_digit=1+no_of_digit;
		temp->digit=new char[temp.no_of_digit];
		while(i++<temp.no_of_digit)
		{
			*(temp.digit+i)=in_hand+*(digit+i)+*(x.digit+i)-48;
			if(*(temp.digit+i)>57)
			{
				*(temp.digit+i)-=10;
				in_hand=1;
			}
			else
				in_hand=0;
		}
		if(*temp->(digit+temp.no_of_digit-2)<48)
			return big_number temp_2(temp->digit,temp.no_of_digit);
		else
			return temp;
	}
/*	
	big_number big_number:operator-(big_number x)
	{
		
	}
	
	big_number big_number:operator*(big_number x)
	{
		
	}
	
	big_number big_number:operator/(big_number x)
	{
		
	}
	
	big_number big_number:operator%(big_number x)
	{
		
	}
	
	big_number big_number:operator+(big_number x)
	{
		
	}
	
	big_number big_number:operator-(long x)
	{
		
	}
	
	big_number big_number:operator*(long x)
	{
		
	}
	
	big_number big_number:operator/(long x)
	{
		
	}
	
	big_number big_number:operator%(long x)
	{
		
	}
*/	
	~big_number()
	{
		delete []digit;
	}
};

int main()
{
	big_number x="1233565667898073463463452312345";
	cout<<x.get_num();
	return 0;
}