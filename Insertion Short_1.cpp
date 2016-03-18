#include<iostream>
using namespace std;
#define SIZE 100

class object
{
private:
	int value[SIZE];
	int arr_size;
public:
	object();
	void show();
	void incert(int a);
};

object::object()
{
	arr_size=0;
	for(int i=0;i<SIZE;i++)
	{
		value[i]=-9000;
	}
}

void object::show()
{
	for(int i=0;i<arr_size;i++)
	{
		cout<<value[i]<<"	";
	}
}

void object::incert(int a)																		//Shorted Incertion
{
	int i=0;
	//bool flag=0;
	while(a>value[i++] && i<arr_size+1)
		if(i==SIZE)
		{
			cout<<"\n\n\tStack FULL . . . . .";
			return;
		}

	int temp_1=value[i-1];
	value[i-1]=a;
	while(i++ < arr_size)
	{
		int temp_2=value[i-1];
		value[i-1]=temp_1;
		//value[i]=value[i];
		temp_1=temp_2;
	}
	arr_size++;
	return;
}

int main()
{
	object ob;
	int i=1;
	while(i)
	{
		cout<<"\n\n\tIf u want to incert a number then press 1\n\tIf u want to see list then press 2\n\tIf u want to tarninate the programme then press 0\n\t\t\t";
		cin>>i;
		if(i==1)
		{
			cout<<"\n\tPlease enter a number : ";
			cin>>i;
			ob.incert(i);
			i=1;
		}

		else if(i==2)
		{
			ob.show();
		}
		else if(i==0)
		{
			return 0;
		}

		else
		{
			cout<<"\n\n\tError incertion. Please enter a valied option . . . . .";
		}
	}
	return 0;
}