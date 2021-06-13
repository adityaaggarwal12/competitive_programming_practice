#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char c[101], b[101];
    scanf("%s%s", c,b);
    int n=strlen(c);
    char d[n+1];
    for(int i=0;i<n;i++){
        if(c[i]==b[i]){
            d[i]='0';
        }
        else{
            d[i]='1';
        }
    }
    d[n]='\0';
    printf("%s", d);
    return 0;
}