#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", n);
    for(int i=1;i<n;i++){
        printf(" %d", i);
    }    
    return 0;
}