#include<iostream>
using namespace std;

typedef struct tagasdf
{
	double x;
	double y;
}point;

typedef struct tag
{
	point p1;
	point p2;
}rectangle;

int if_in(rectangle arr[],int start,int total_rectangle_number,point p)
{
	for(int i=start;i<total_rectangle_number;i++)
		if( (arr[i].p1.x<p.x && arr[i].p2.x>p.x) && (arr[i].p1.y>p.y && arr[i].p2.y<p.y) )
			return (i+1);
	return 0;
}

int main()
{
	int n=0,total_rectangle_number=0;
	char ch;
	point p[100];
	rectangle r[10];
	while(1)
	{
		bool x;
		x=false;
		ch=getchar();
		if(ch!=EOF)
		{
			while(++total_rectangle_number)
			{
				if(x)
					ch=getchar();
				else
					x=true;
				if(ch=='r')
				{
					cin>>r[total_rectangle_number-1].p1.x>>r[total_rectangle_number-1].p1.y>>r[total_rectangle_number-1].p2.x>>r[total_rectangle_number-1].p2.y;
				}
				else if(ch=='*')
					break;
				getchar();
			}
			total_rectangle_number-=1;
			double x=0,y=0;
			n=0;
			while(1)
			{
				cin>>x>>y;
				if(x==9999.9 && y==9999.9)
					break;
				p[n].x=x;
				p[n].y=y;
				n++;
			}
			for(int i=0;i<n;i++)
			{
				int position=if_in(r,0,total_rectangle_number,p[i]);
				if(position)
				{
					cout<<"Point "<<(i+1)<<" is contained in figure "<<position<<"\n";
					position=if_in(r,position,total_rectangle_number,p[i]);
					while(position<=total_rectangle_number && position!=0)
					{
						cout<<"Point "<<(i+1)<<" is contained in figure "<<position<<"\n";
						position=if_in(r,position,total_rectangle_number,p[i]);
					}
				}
				else
					cout<<"Point "<<(i+1)<<" is not contained in any figure\n";
			}
			getchar();
		}
		else
			break;
	}
	return 0;
}