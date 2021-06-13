#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int arr[5][5],a,b,c,d;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d", &arr[i][j]);
        }
    }for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                a=i+1;
                b=j+1;
            }
        }
    }
    c=(abs)(3-a);
    d=(abs)(3-b);
    printf("%d", (c+d));
    
    return 0;
}