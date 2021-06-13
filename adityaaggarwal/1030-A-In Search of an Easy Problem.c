#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            printf("HARD");
            break;
        }
        else if (i==(n-1)){
            printf("EASY");
        }
    }
    return 0;
}