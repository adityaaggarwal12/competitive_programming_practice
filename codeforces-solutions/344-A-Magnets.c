#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,count=1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<(n-1);i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    printf("%d", count);
    
    
    return 0;
}