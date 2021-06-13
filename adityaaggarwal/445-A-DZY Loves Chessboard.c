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
    int n,m;
    scanf("%d%d", &n,&m);
    while(n){
        char arr[101];
        scanf("%s", arr);
        for(int j=0;j<m;j++){
            if((n)%2==1 && arr[j]=='.'){
                if((j+1)%2==1){
                    arr[j]='B';
                }
                else if((j+1)%2==0){
                    arr[j]='W';
                }
            }
            else if((n)%2==0 && arr[j]=='.'){
                if((j+1)%2==1){
                    arr[j]='W';
                }
                else if((j+1)%2==0){
                    arr[j]='B';
                }
            }
        }
        printf("%s\n", arr);
        n--;
    }
    return 0;
}