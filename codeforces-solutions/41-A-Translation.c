#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char s[101],c[101];
    scanf("%s\n%s", s,c);
    int n=strlen(s);
    for(int i=0;i<n;i++){
        if(s[i]!=c[n-1-i]){
            printf("NO");
            break;
        }
        else if(i==(n-1)){
            printf("YES");
        }
    }
    return 0;
}