#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,b=0;
    scanf("%d", &x);
    b+=(x/5);
    x=(x%5);
    b+=(x/4);
    x=(x%4);
    b+=(x/3);
    x=(x%3);
    b+=(x/2);
    x=(x%2);
    b+=(x/1);
    x=(x%1);
    printf("%d", b);

    return 0;
}