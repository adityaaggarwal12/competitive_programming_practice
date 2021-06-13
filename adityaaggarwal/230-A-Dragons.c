#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int ascending (const void * a, const void * b) {
return ( *(int*)a - *(int*)b );
}
int descending (const void * a, const void * b) {
return ( *(int*)b - *(int*)a );
}

int main(){
    long long s,n, b,c,d=0;
    scanf("%lld%lld", &s,&n);
    int arr[n][2];
    for(int i=0;i<n;i++){
        scanf("%lld%lld", &arr[i][0],&arr[i][1]);
    }
    for(int i=0;i<n;i++){
        b=LONG_MAX;
        for(int j=0;j<n;j++){
            if(arr[j][0]<b){
                b=arr[j][0];
                c=j;
            }
        }
        if(b>=s){
            printf("NO");
            break;
        }
        else{
            d++;
            arr[c][0]=INT_MAX;
            s+=arr[c][1];
        }
        if(d==(n)){
            printf("YES");
            break;
        }
    }
    
    return 0;
}