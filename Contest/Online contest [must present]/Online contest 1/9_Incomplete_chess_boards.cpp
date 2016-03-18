#include<iostream>
using namespace std;

typedef struct tag
{
	int y;
	int x;
}point;

int difference_of_two_value(int a, int b)
{
	if(a>b)
		return (a-b);
	return (b-a);
}

bool if_diagonal(point a,point b)
{
	bool flag=false;
	if(difference_of_two_value(a.x,b.x)==difference_of_two_value(a.y,b.y))
		return true;
	return false;
}

bool if_horigontal(point a,point b)
{
	if(a.x==b.x || a.y==b.y)
		return true;
	return false;
}

int main()
{
	int taste;
	cin>>taste;
	for(int i=1;i<=taste;i++)
	{
		point a,b;
		cin>>a.y>>a.x>>b.y>>b.x;
		if(if_horigontal(a,b) || if_diagonal(a,b))
			cout<<"Scenario #"<<i<<":\n0\n";
		else
			cout<<"Scenario #"<<i<<":\n1\n";
		cout<<endl;
	}
	return 0;
}