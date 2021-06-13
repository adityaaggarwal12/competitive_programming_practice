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
        int arr[n],max=0,min=200,a,b;
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
            if(arr[i]>max){
                max=arr[i];
                a=i;
            }
            if(arr[i]<min){
                min=arr[i];
                b=i;
            }
        }
        int x,y,f,g;
        f=a,g=b;
        if(b<a){
            f=b;g=a;
        }
        if(g+1>n-f){
            x=n-f;y=g+1;
        }
        else{
            x=g+1;y=n-f;
        }
        if(x<(f+1+(n-g))){
            printf("%d\n", x);
        }
        else{
            printf("%d\n", f+1+(n-g));
        }

    }
    return 0;
}