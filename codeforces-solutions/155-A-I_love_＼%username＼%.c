#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &arr[0]);
    int b=arr[0],c=arr[0],count=0;
    for(int i=1;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>b){
            count++;
            b=arr[i];
        }
        else if(arr[i]<c){
            count++;
            c=arr[i];
        }
    }
    printf("\n%d", count);
    return 0;
}