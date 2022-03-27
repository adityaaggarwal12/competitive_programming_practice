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
    int n,m,count=1;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{count=1;}      
    }
    if(count>=(n-(m-1))){
        printf("%d",n-count);
    }
    else{
        printf("-1");
    }
    
    return 0;
}