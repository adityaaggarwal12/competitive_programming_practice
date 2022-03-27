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
    int t;
    scanf("%d", &t);
    while(t--){
        int n,x=3;
        scanf("%d", &n);
        int arr[n],count=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                printf("YES\n");
                break;
            }
            if(i==n-2){
                printf("NO\n");
            }
        }
    }
    return 0;
}