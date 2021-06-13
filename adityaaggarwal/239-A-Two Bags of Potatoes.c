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
    long long y,k,n;
    scanf("%lld%lld%lld",&y,&k,&n);
    if(y>=n || k>n){
        printf("-1");
        return 0;
    }
    int count=0;
    for(int i=k;i<=n;i+=k){
        if((i-y)>0 ){
            printf("%d ", i-y);
            count++;
        }
    }
    if(count==0){
        printf("-1");
    }   
    return 0;
}