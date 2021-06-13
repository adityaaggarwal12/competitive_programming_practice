#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,count=0;
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<n;i++){
        arr2[(arr[i]-1)]=i+1;
    }
    for(int i=0;i<n;i++){
        printf("%d ", arr2[i]);
    }
    
    return 0;
}