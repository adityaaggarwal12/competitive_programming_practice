#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,l=0,r=0;
    scanf("%d", &n);
    int arr[n][2];
    for(int i=0;i<n;i++){
        scanf("%d%d",&arr[i][0],&arr[i][1]);
        if(arr[i][0]==1){
            l++;
        }
        if(arr[i][1]==1){
            r++;
        }
    }
    if(l==n){l=0;}
    if(r==n){r=0;}

    if(l==0 && r==0){
        printf("0");
    }
    else if(l>r){
        printf("%d", (n-l)+r);
    }
    else if(r>l){
        printf("%d", (n-r)+l);
    }
    else if(l==r){
        if(l>(n-l)){
            printf("%d", 2*(n-l));
        }
        else{
            printf("%d", 2*l);
        }
    }
    return 0;
}