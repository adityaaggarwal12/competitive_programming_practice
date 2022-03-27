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
    int n;
    scanf("%d", &n);
    int arr[9999],g=1;
    arr[0]=0;
    arr[1]=1;
    while(arr[g]<=n){
        g++;
        arr[g]=arr[g-1]+arr[g-2];
    }
    for(int i=0;i<=g;i++){
        for(int j=0;j<=g;j++){
            for(int k=0;k<=g;k++){
                if((arr[i]+arr[j]+arr[k])==n){
                    printf("%d %d %d",arr[i],arr[j],arr[k]);
                    return 0;
                }
            }
        }
    }
    printf("I'm too stupid to solve this problem");


    return 0;
}