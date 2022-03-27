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
    char c[100001],s[100001];
    scanf("%s%s",c,s);
    int arr[2],count=0;
    if(strlen(s)!=strlen(c)){
        printf("NO");
        return 0;
    }
    for(int i=0;i<strlen(c);i++){ 
        if(c[i]!=s[i]){
            arr[count]=i;
            count++;
            if(count>2){
                printf("NO");
                return 0;
            }
        }
    }
    if(c[arr[1]]==s[arr[0]] && c[arr[0]]==s[arr[1]]){
        printf("YES");
    }
    else{printf("NO");}

    return 0;
}