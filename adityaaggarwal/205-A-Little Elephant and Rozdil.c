#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long int n,b=10000000000,c,count=0,d;
    scanf("%lld", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld", &arr[i]);
        if(arr[i]==b){
            count++;
            d=arr[i];
        }
        if(arr[i]<b){
            b=arr[i];
            c=i+1;
        }
        if(b!=d){
            count=0;
        }
    }
    if(count!=0){
        printf("Still Rozdil");
    }
    else{
        printf("%lld", c);
    }
    return 0;
}