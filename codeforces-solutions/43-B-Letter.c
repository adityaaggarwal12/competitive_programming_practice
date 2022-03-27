#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int ascending (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
int descending (const void * a, const void * b) {
    return ( *(int*)b - *(int*)a );
}

int main(){
    char c[201],s[201];
    int count=0;
    gets(c);
    gets(s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){continue;}
        for(int j=0;j<strlen(c);j++){
            if(s[i]==c[j]){
                count++;
                c[j]='!';
                break;
            }
            if(j==strlen(c)-1){
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}