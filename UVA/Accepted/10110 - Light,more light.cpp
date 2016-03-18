
/*
	UVA 10110 - Light,more light
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long n,sq;
    while(cin>>n && n)
    {
        sq=sqrt(n);
        if(sq*sq==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return(0);
}