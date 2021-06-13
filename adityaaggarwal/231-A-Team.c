#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,ans=0;
    scanf("%d", &n);
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==1){
                count++;
                if(count>1){
                    ans++;
                    break;
                }
            }
        }
    }
    printf("%d", ans);
    return 0;
}   