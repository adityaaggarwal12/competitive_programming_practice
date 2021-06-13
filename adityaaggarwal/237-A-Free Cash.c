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
    int arr[n],arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d%d",&arr[i],&arr2[i]);
    }
    int count=1,max=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1] && arr2[i]==arr2[i+1] ){
            count++;
        }
        else{
            count=1;
        }
        if(count>max){max=count;}
        
    }
    printf("%d",max);
    return 0;
}