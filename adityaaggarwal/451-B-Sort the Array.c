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
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int x=0,z=4,y=4;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1] && x==0){
            x=1;y=i;
        }
        if(x==1 && (arr[i]<arr[i+1] || i==n-1)){
            z=i;
            break;
        }
    }
    if(x==0){
        printf("yes\n1 1");
    }
    else{
        if(arr[y]>arr[z+1] && (z+1)<n){
            printf("no");
            return 0;
        }
        if(arr[y-1]>arr[z] && y!=0){
            printf("no");
            return 0;
        }
        for(int i=z+1;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                printf("no");
                return 0;
            }
        }
        printf("yes\n%d %d",y+1,z+1);

    }
    

    return 0;
}