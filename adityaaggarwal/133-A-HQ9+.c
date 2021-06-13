#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char c[101];
    gets(c);
    int n=strlen(c);
    for(int i=0;i<n;i++){
        if(c[i]=='H' || c[i]=='Q' || c[i]=='9' ){
            printf("YES");
            break;
        }
        else if(i==(n-1)){
            printf("NO");
        }
    }
    return 0;
}