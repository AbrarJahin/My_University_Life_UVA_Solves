//Sieve of Eratosthenes

#include<cstdio>
#include<cmath>
using namespace std;

#define max 19000000

bool prime[max+1];

void sieve(){
    long int i,j;
    for(i=2;i<=max;i++)
        prime[i]=true;
    for(i=2;i*i<=max;){
        for(j=2*i;j<=max;j+=i){
            prime[j]=false;
            }
        i++;
        while(!prime[i])
            i++;
        }
    }

int main(){
    sieve();
    long int n;
    while(scanf("%ld",&n)==1){
        if(prime[n]==true)
            printf("prime\n");
        else
            printf("not prime\n");
        }
    return 0;
    }