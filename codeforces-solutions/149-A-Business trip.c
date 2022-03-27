#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,arr[12],temp,count=0;
    scanf("%d", &n);
    for( int i=0;i<12;i++){
        scanf("%d", &arr[i]);
    }
    for( int i=0;i<12;i++){
        for( int j=i+1;j<12;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for( int i=0;i<12;i++){
        if(n<=0){
            break;
        }
        n-=arr[i];
        count++;
        
    }
    if(n>0){
        printf("-1");
    }
    else{
        printf("%d", count);
    }
    return 0;
}