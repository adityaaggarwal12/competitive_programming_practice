#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,count=0,b=0;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    for(int i=0;i<(n-1);i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        
        if(count>b){
            b=count;
        }
    }
    printf("%d", b);

    return 0;
}