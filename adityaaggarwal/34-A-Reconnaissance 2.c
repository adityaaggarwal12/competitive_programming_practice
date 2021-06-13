#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,a,b,c;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    a=(abs)(arr[n-1]-arr[0]);
    b=n;
    c=1;
    for(int i=0;i<n-1;i++){
        if((abs)(arr[i]-arr[i+1])<a){
            b=i+2;
            c=i+1;
            a=(abs)(arr[i]-arr[i+1]);
        }
    }
    printf("%d %d", b,c);
    return 0;
}