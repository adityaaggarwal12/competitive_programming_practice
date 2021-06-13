#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long n,numeve,numodd,k,count1=0;
    scanf("%lld%lld", &n,&k);
    if(n%2==0){
        numeve=n/2;
        numodd=n/2;
    }
    else{
        numodd=(n+1)/2;
        numeve=(n-1)/2;
    }
    if(k>numodd){
        printf("%lld", 2*(k-numodd));
    }
    else{
        printf("%lld", 2*(k)-1);
    }
    
    return 0;
}