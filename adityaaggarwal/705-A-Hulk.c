#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    
    if(n%2==0){
        printf("I hate that I love ");
        for(int i=1;i<(n/2);i++){
            printf("that I hate that I love ");
        }
        printf("it");
    }
    else{
        printf("I hate ");
        for(int i=0;i<((n-1)/2);i++){
            printf("that I love that I hate ");
        }
        printf("it");
    }
    
    return 0;
}
