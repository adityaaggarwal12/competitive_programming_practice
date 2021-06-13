#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int ascending (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
int descending (const void * a, const void * b) {
    return ( *(int*)b - *(int*)a );
}

int main(){
    char c[100001],temp=2;
    scanf("%s",c);
    int n=strlen(c);
    for(int i=0;i<n;i++){
        if(c[i]=='0'){
            temp=0;
        }
        if(temp==0){
            c[i]=c[i+1];
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%c",c[i]);
    }

    return 0;
}