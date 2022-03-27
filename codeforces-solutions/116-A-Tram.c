#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n][2],count=0,max=0;
    for(int i=0;i<n;i++){
        scanf("%d %d", &arr[1][0], &arr[i][1]);
        count-=arr[1][0];
        count+=arr[i][1];
        if(count>max){
            max=count;
        }
    }    
    printf("%d", max);
    return 0;
}