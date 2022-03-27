#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char c[100];
    char b[100];
    scanf("%s\n%s", c,b);
    int a=strlen(b);
    for(int i=0;i<a;i++){
        if((int)c[i]<97){
            c[i]+=32;
        }
        if((int)b[i]<97){
            b[i]+=32;
        }
    }
    int n=strcmp(c,b);
    printf("%d", n);

    return 0;
}