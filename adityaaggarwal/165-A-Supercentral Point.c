#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,count=0;
    scanf("%d", &n);
    int arr[n][2];
    for(int i=0;i<n;i++){
        scanf("%d %d", &arr[i][0],&arr[i][1]);
    }
    for(int i=0;i<n;i++){
        int a=0,b=0,c=0,d=0;
        for(int j=0;j<n;j++){
            if((arr[i][0]<arr[j][0]) && (arr[i][1]==arr[j][1])){
                a=1;
            }
            else if((arr[i][0]>arr[j][0]) && (arr[i][1]==arr[j][1])){
                b=1;
            }
            else if((arr[i][0]==arr[j][0]) && (arr[i][1]<arr[j][1])){
                c=1;
            }
            else if((arr[i][0]==arr[j][0]) && (arr[i][1]>arr[j][1])){
                d=1;
            }
            if((a==1) && (b==1) && (c==1) && (d==1)){
                count++;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}