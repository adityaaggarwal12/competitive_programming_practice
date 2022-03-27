#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char c[10001];
    scanf("%s", c);
    int n=strlen(c),b=1;
    for(int i=0;i<n;i++){
        if(c[0]=='4'){
            printf("NO");
            break;
        }
        if((c[i]!='1') && (c[i]!='4')){
            printf("NO");
            break;
        }
        if((c[i]=='4') && (c[i+1]=='4')){
            b++;
        }
        if((c[i]=='4') && (c[i+1]!='4')){
            b=1;;
        }
        if(b>2){
            printf("NO");
            break;
        }
        if(i==n-1){
            printf("YES");
        }
    }
    return 0;
}