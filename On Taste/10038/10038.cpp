using namespace std;
#include<iostream>
int main()
{
    long long last,n,m=0,no=0,val;
    char c;
    bool done[3010]={false},ans;
    while( cin>>no )
    {
           cin>>last;
           for( int l=1;l<no;l++ )
           {
                cin>>n;
                
                if( (last-n)>0)
                    val=(last-n);
                else 
                     val=(n-last);
                done[val]=true;
                //cout<<last<<” “<<n<<” “<<val<<”\t”;
                last=n;           
           }
           ans=true;
           for( int i=1;i<no;i++)
           {
                 if( done[i] == false )
                 {
                     //cout<<i<<”\n”;
                     ans=false;
                     break;
                 }
           }
           if ( ans)
               cout<<”Jolly\n”;
           else
                cout<<”Not jolly\n”;
           for(int i=0;i<3010;i++)
                   done[i]=false;
    }
    return 0;
}