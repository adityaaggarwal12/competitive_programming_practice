#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t;
    int x=0,y=0,z=0;
    scanf("%d", &t);
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0;i<3;i++){
            if(i==0){
                x+=arr[i];
            }
            else if(i==1){
                y+=arr[i];
            }
            else{z+=arr[i];}
        }
    }
    if(x==0 && y==0 && z==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}