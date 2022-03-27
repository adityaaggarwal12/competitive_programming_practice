#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,m,count=0;
    scanf("%d %d", &n ,&m);
    while(m>=n){
        n*=3;
        m*=2;
        count++;
    }
    printf("%d", count);
    return 0;
}