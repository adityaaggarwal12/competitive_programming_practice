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
    int n,t=0,f=0,h=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);       
    }
    for(int i=0;i<n;i++){
        if(arr[i]==25){
            t++;
        }
        if(arr[i]==50){
            if(t>0){
                f++;
                t--;
            }
            else{
                printf("NO");
                break;
            }
        }
        if(arr[i]==100){
            if(f>0 && t>0){
                h++;
                t--;
                f--;
            }
            else if(t>2){
                h++;
                t-=3;
            }
            else{
                printf("NO");
                break;
            }
        }
        if(i==n-1){
            printf("YES");
        }
    }
    
    return 0;
}