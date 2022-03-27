#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int n,b=0,c=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]==5){
            b++;
        }
        else{
            c++;
        }
    }
    if(b<9 && c>1){c=1;}
    if((b<9 && c==0) || c==0){
        printf("-1");
    }
    else{
        b=b-(b%9);
        for(int i=0;i<b;i++){
            printf("5");
        }
        for(int i=0;i<c;i++){
            printf("0");
        }

    }
    return 0;
}