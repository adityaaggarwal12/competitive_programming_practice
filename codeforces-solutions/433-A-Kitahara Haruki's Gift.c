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
    int arr[n],count100=0,count200=0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]==100){
            count100++;
        }
        else{
            count200++;
        }
    }
    if(count100%2==0 && count100>1){
        printf("YES");
    }
    else if(count100==0 && count200%2==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}