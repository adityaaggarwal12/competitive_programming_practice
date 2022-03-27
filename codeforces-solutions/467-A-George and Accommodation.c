#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,count=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d %d", &a,&b);
        if((b-a)>=2){
            count++;
        }
        
    }
    printf("%d", count);
    return 0;
}