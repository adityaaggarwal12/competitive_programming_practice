#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n+1;i++){
        for(int j=0;j<(n+1-(i+1));j++){
            printf("  ");
        }
        for(int j=0;j<i+1;j++){
            if(i==0 && j==0){
                printf("%d", j);
            }
            else{
                printf("%d ", j);
            }
        }
        for(int j=i-1;j>=0;j--){
            if(j==0){
                printf("%d", j);
            }
            else{
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<(n+1-(i+1));j++){
            printf("  ");
        }
        for(int j=0;j<i+1;j++){
            if(i==0 && j==0){
                printf("%d", j);
            }
            else{
                printf("%d ", j);
            }
        }
        for(int j=i-1;j>=0;j--){
            if(j==0){
                printf("%d", j);
            }
            else{
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}