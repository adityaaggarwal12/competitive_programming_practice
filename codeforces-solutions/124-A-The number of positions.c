#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,a,b;
    scanf("%d%d%d", &n,&a,&b);
    if((a+b)==n){
        printf("%d", b);
    }
    else if((a+b)<n){
        printf("%d", 1+b);
    }
    else{
        printf("%d", n-a);
    }
    return 0;
}