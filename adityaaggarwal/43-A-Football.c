#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,count1=1,count2=0,a;
    scanf("%d", &n);
    char s[101],x[101],z[101];
    scanf("%s", s);
    for(int i=0;i<(n-1);i++){
        scanf("%s", x);
        a=strcmp(s,x);
        if(a==0){
            count1++;
        }
        else{
            count2++;
            strcpy(z,x);
        }
    }
    if(count1>count2){
        printf("%s",s);
    }
    else{
        printf("%s", z);
    }

    return 0;
}