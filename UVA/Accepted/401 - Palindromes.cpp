/*
	UVA 401 - Palindromes
*/

#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
using namespace std;
int main()
{
int i;
string s,b,d;
char c[10000];
memset(c,0,sizeof(c));
c['A']='A';
c['E']='3';
c['H']='H';
c['I']='I';
c['J']='L';
c['L']='J';
c['M']='M';
c['O']='O';
c['S']='2';
c['T']='T';
c['U']='U';
c['V']='V';
c['W']='W';
c['X']='X';
c['Y']='Y';
c['Z']='5';
c['1']='1';
c['2']='S';
c['3']='E';
c['5']='Z';
c['8']='8';
while(cin>>s)
    {
    b=d="";
    for(i=s.length()-1;i>=0;i--)
            {
            b+=s[i];
            //if(c[s[i]]!=0)
            d+=c[s[i]];
            //else d+=s[i];
            }
    //cout<<s<<" "<<b<<" "<<d<<endl;
    if(s!=b && s!=d) cout<<s<<" -- is not a palindrome."<<endl<<endl;
    else if(s==b && s!=d) cout<<s<<" -- is a regular palindrome."<<endl<<endl;
    else if(s!=b && s==d) cout<<s<<" -- is a mirrored string."<<endl<<endl;
    else cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
    }
return 0;
}

/*
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

char mirror[256]={'\0'};

void mirror_assignment()
{
	mirror['A']='A';
	mirror['E']='3';
	mirror['3']='E';
	mirror['H']='H';
	mirror['I']='I';
	mirror['J']='L';
	mirror['L']='J';
	mirror['M']='M';
	mirror['O']='O';
	mirror['2']='S';
	mirror['S']='2';
	mirror['T']='T';
	mirror['U']='U';
	mirror['V']='V';
	mirror['W']='W';
	mirror['X']='X';
	mirror['Y']='Y';
	mirror['Z']='5';
	mirror['5']='Z';
	mirror['1']='1';
	mirror['8']='8';
}

bool if_palindrome(char input[])
{
	int length=strlen(input)-1;
	int middle=length/2;
	int i=0;
	bool palindrome=true;
	while(i<=middle && palindrome)
	{
		if(input[i]!=input[length-i])
			palindrome=false;
		i++;
	}
	return palindrome;
}

bool if_mirrored(char input[])
{
	int length=strlen(input)-1;
	int middle=length/2;
	int i=0;
	bool mirrored=true;
	while(i<=middle && mirrored)
	{
		if(input[i]!=mirror[input[length-i]])
			mirrored=false;
		i++;
	}
	return mirrored;
}

int main()
{
	char input[1000];
	bool palindrome,mirrored;
	mirror_assignment();
	while(cin>>input)
	{
		cout<<input<<" -- ";
		palindrome=if_palindrome(input);
		mirrored=if_mirrored(input);
		if(palindrome && mirrored)
			cout<<"is a mirrored palindrome.\n";
		else if(!palindrome && !mirrored)
			cout<<"is not a palindrome.\n";
		else if(palindrome && !mirrored)
			cout<<"is a regular palindrome.\n";
		else
			cout<<"is a mirrored string.\n";
		
	}
	return 0;
}
*/