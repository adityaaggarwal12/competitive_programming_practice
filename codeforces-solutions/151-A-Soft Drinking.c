#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,k,l,c,d,p,nl,np;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int tml=k*l/(nl*n),tsl=c*d/n,ts=p/(np*n),final;
    final=tml;
    if(final>tsl){final=tsl;}
    if(final>ts){final=ts;}
    printf("%d", final);

    return 0;
}