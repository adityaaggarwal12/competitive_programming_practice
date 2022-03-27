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
    int n,m,c;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d%d", &n,&m);
    c=n+m;
    if(m==n){
        for(int i=0;i<n;i++){
            printf("BG");
        }
    }
    else if(m>n){
        for(int i=0;i<n;i++){
            printf("GB");
        }
        for(int i=0;i<(m-n);i++){
            printf("G");
        }
    }
    else{
        for(int i=0;i<m;i++){
            printf("BG");
        }
        for(int i=0;i<(n-m);i++){
            printf("B");
        }
    }
    return 0;
}