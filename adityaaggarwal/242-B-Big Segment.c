#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>


int ascending (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
int descending (const void * a, const void * b) {
    return ( *(int*)b - *(int*)a );
}

int main(){
    long long n,min1=LONG_MAX,max2=0;
    scanf("%lld", &n);
    long long arr[n],arr2[n];
    for(int i=0;i<n;i++){
        scanf("%lld%lld",&arr[i],&arr2[i]);
        if(arr[i]<min1){
            min1=arr[i];
        }
        if(arr2[i]>max2){
            max2=arr2[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==min1 && arr2[i]==max2){
            printf("%d", i+1);
            return 0;
        }
    }
    printf("-1");


    return 0;
}