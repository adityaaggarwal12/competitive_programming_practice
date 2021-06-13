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
    int n,count=1,max=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && j!=i){
                count++;
            }
        }
        if(count>max){max=count;}
    }
    if(n%2==1){
        if(max<=(n+1)/2){
            printf("YES");
        }
        else{printf("NO");}
    }
    else if(n%2==0){
        if(max<=n/2){
            printf("YES");
        }
        else{printf("NO");}
    }
    

    return 0;
}