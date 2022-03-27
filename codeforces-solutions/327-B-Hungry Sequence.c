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
    long long n;
    scanf("%lld", &n);
    for(int i=0;i<n;i++){
        printf("%d ", 1000001+i);
    }
    return 0;
}