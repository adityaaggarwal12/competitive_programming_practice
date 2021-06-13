#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,max=0,min=101,x,y;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max){
            max=arr[i];
            x=i+1;
        }
        if(min>=arr[i]){
            min=arr[i];
            y=i+1;
        }
    }
    if(x>y){
        printf("%d", (x-1)+(n-y-1));
    }
    else{
        printf("%d", (x-1)+(n-y));
    }


    return 0;
}