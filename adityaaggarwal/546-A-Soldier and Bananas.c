#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int k,n,w,t=0;
    scanf("%d %d %d", &k,&n,&w);
    for(int i=1;i<=w;i++){
        t+=(i*k);
    }
    if(t>n)printf("%d",t-n);
    else printf("%d", 0);
    return 0;
}
