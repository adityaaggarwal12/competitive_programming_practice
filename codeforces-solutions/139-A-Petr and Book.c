#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,count=0,arr[7];;
    scanf("%d", &n);
    for(int i=0;i<7;i++){
        scanf("%d", &arr[i]);
    }
    while(n>0){
        for(int i=0;i<7;i++){
            n-=arr[i];
            count++;
            if(n<=0){break;}
            
        }
    }
    if(count%7!=0){
        printf("%d", count%7);
    }
    else{printf("7");}
    return 0;
}