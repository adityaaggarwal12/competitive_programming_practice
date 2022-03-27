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
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count0=0,count1=0,max=-999999,x,y,ans=0;
    for(int i=0;i<n;i++){
        count0=0;count1=0;
        for(int j=i;j<n;j++){
            if(arr[j]==0){count0++;}
            else if(arr[j]==1){count1++;}
            if((count0-count1)>max){
                max=(count0-count1);
                ans=count0;
                x=i;y=j;
            }
        }
    }
    // printf("%d ",max);
    for(int i=0;i<n;i++){
        if(i>=x && i<=y){continue;}
        if(arr[i]==1){ans++;}

    }
    if(max<0){
        printf("%d",n+max);
        return 0;
    }
    printf("%d",ans);
    // printf(" %d %d",x,y);

    
    return 0;
}