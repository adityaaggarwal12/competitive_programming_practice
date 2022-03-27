#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,a=0,d=0;
    scanf("%d", &n);
    char c[100001];
    scanf("%s", c);
    int x=strlen(c);
    for(int i=0;i<x;i++){
        if(c[i]=='A'){
            a++;
        }
        else{d++;}
    }
    if(a>d){printf("Anton");}
    else if(d>a){printf("Danik");}
    else{printf("Friendship");}
    return 0;
}