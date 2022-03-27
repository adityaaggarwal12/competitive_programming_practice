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
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d", &arr2[i]);
    }
    qsort(arr,n,4,ascending);
    qsort(arr2,m,4,ascending);
    if(arr[n-1]>=arr2[0]){
        printf("-1");
        return 0;
    }
    if(2*arr[0]>=arr2[0]){
        printf("-1");
        return 0;
    }
    if(2*arr[0]<=arr[n-1]){
        printf("%d", arr[n-1]);
    }
    else{
        printf("%d", 2*arr[0]);
    }
    return 0;
}