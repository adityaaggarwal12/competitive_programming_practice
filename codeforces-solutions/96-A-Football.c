#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char s[101];
    int count=1,b=0;
    scanf("%s", s);
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else if(s[i]!=s[i+1]){
            count=1;
        }
        if(count>b){
            b=count;
        }
    }
    if(b>=7){
        printf("YES");
    }
    else{
        printf("NO");

    }
    return 0;
}