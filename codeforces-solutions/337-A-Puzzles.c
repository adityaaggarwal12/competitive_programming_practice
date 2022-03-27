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
    int n,m,b=999999;
    scanf("%d%d", &n,&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr,m,4,descending);
    for(int i=0;i<m-n+1;i++){
        if((arr[i]-arr[i+(n-1)])<b){
            b=(arr[i]-arr[i+(n-1)]);
        }
    }
    printf("%d", b);
    return 0;
}