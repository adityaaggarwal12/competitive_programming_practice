#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t;
    char arr[100];
    scanf("%d", &t);
    while(t--){   
        scanf("%s", arr);
        int n=strlen(arr);
        if( n >10){printf("%c%d%c\n", arr[0],n-2,arr[n-1]);}
        else printf("%s\n", arr);
    }
    return 0;
}