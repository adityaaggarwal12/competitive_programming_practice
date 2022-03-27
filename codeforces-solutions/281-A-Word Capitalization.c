#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int c[1000];
    scanf("%s", c);
    char a=c[0];
    if(((int)a)>(96)){
        c[0]-=32;
    }
    printf("%s", c);
    
    return 0;
}