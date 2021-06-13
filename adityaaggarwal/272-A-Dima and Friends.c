#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,b=0,count=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        b+=arr[i];
    }
    b--;
    if((1+b)%(n+1)!=0){
        count++;
    }
    if((2+b)%(n+1)!=0){
        count++;
    }
    if((3+b)%(n+1)!=0){
        count++;
    }
    if((4+b)%(n+1)!=0){
        count++;
    }
    if((5+b)%(n+1)!=0){
        count++;
    }
    printf("%d", count);
    return 0;
}