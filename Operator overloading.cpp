#include<iostream>
using namespace std;

class rect
{
	int length,width;
public:
	rect()
	{
		length=width=0;
	}
	rect(int len, int wid)
	{
		length=len;
		width=wid;
	};
	rect operator+(int p);
	rect operator-(int p);
	rect operator-(rect r);
	rect operator++();
	rect operator+=(rect op);
	void show()
	{
		cout<<"	Length = "<<length<<"	Width = "<<width<<" .\n";
	}
	void set_len(int i)
	{
		length=i;
	}
	void set_width(int i)
	{
		width=i;
	}
	int get_len()
	{
		return length;
	}
	int get_width()
	{
		return width;
	}
	virtual ~rect(){};															//Virtual destractor
}

/*rect::rect(int len, int wid)
{
	length=len;
	width=wid;
}*/

rect rect::operator+(int p)
{
	rect temp;
	temp.set_len(p+length);
	temp.set_width(p+width);
	return temp;
}

rect rect::operator-(int p)
{
	rect temp;
	temp.set_len(length-p);
	temp.set_width(width-p);
	return temp;
}

rect rect::operator-(rect p)
{
	rect temp;
	temp.set_len(length-p.get_len());
	temp.set_width(width-p.get_width());
	return temp;
}

rect rect::operator++()
{
	length++;
	width++;
	return *this;
}

rect rect::operator+=(rect p)
{
	length+=p.get_len();
	width=p.get_width();
	return *this;
}

int main()
{
	rect a(20,10),b,c;
	cout<<"At the begining of the object A >> ";
	a.show();
	b=a+25;
	cout<<endl<<endl;
	b=b-a;
	cout<<"After B=B-A, in object B\n";
	b.show();
	
	c=b-5;
	cout<<"After C=B-5, in object C\n";
	c.show();
	
	++c;																		//c++ dila ki somossa????????????????
	cout<<"After C++, in object C\n";
	c.show();
	
	a+=c;
	cout<<"After a+=c, in object A\n";
	a.show();
	return 0;
}