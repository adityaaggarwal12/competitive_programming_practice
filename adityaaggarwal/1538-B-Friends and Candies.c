#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int ascending (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
int descending (const void * a, const void * b) {
    return ( *(int*)b - *(int*)a );
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n],sum=0;
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
            sum+=arr[i];
        }
        // printf("%d ",sum);
        if(sum%n!=0){
            printf("-1\n");
            continue;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]>(sum/n)){
                count++;
            }
        }
        
        printf("%d\n",count);
    }
    return 0;
}