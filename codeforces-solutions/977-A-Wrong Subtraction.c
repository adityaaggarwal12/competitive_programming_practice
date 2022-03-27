#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,m;
    scanf("%d %d", &n ,&m);
    while(m--){
        if(n%10==0){
            n=(n/10);
        }
        else{
            n-=1;
        }
    }
    printf("%d", n);
}