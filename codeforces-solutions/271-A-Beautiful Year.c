#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,a,b,c,d;
    int arr[4];
    scanf("%d", &n);
    while(n<=9999){
        n++;
        int x=n;
        a=x%10;
        x=(x-x%10)/10;
        b=x%10;
        x=(x-x%10)/10;
        c=x%10;
        x=(x-x%10)/10;
        d=x%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            printf("%d", n);
            break;
        }  
    }
    return 0;
}