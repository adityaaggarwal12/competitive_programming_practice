#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char c[201];
    scanf("%s", c);
    int n=strlen(c);
    for(int i=0;i<n;i++){
        if(c[i]=='.'){
            printf("0");
        }
        else if(c[i]=='-'){
            if(c[i+1]=='.'){
                printf("1");
            }
            else{printf("2");}
            i++;
        }
    }
    return 0;
}