#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,m,k,b=101;
    scanf("%d%d%d", &n,&m,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if((arr[i]!=0) && (arr[i]<=k)){
            if(((abs)(m-(i+1)))<b){
                b=(abs)(m-(i+1));
            }
        }
    }
    printf("%d", b*10);

    return 0;
}