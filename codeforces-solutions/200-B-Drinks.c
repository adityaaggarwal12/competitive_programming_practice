#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,a;
    double b=0.0;
    scanf("%d", &n);
    float c=n;
    while(n--){
        scanf("%d", &a);
        b+=(a/c);
    }
    printf("%.12f", b);
    return 0;
}