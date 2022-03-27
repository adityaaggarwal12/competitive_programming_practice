#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,h,count=0;
    scanf("%d %d", &n,&h);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
        if(arr[i]>h){
            count+=2;
        }
        else{
            count++;
        }
    }
    printf("%d", count);
    return 0;
}