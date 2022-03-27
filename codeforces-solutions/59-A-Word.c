#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char c[10000];
    scanf("%s", c);
    int A=0,a=0;
    int n=strlen(c);
    for(int i=0;i<n;i++){
        if(c[i]>96){
            a++;
        }
        else{A++;}
    }
    if(a>=A){
        for(int i=0;i<n;i++){
            if(c[i]<96){
                c[i]+=32;}
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(c[i]>96){
                c[i]-=32;}
        }       
    }
    printf("%s", c);
    return 0;
}