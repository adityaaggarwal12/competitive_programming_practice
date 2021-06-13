#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char s[201];
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s[i]='1';
            s[i+1]='1';
            s[i+2]='1';
            i+=2;
        }
    }
    for(int i=0;i<strlen(s);i++){
        if(s[i]!='1'){
            if(s[i-1]=='1'){
              printf(" ");  
            }
            printf("%c", s[i]);
        }
        else{
            continue;
        }
    }
    return 0;
}