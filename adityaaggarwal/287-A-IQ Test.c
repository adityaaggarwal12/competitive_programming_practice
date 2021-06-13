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
    char a[5];
    char b[5];
    char c[5];
    char d[5];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    scanf("%s", d);
    int n=0;
    for(int i=0;i<4;i++){
        if(((a[i]==b[i] && b[i]==a[i+1] ) || (a[i]==b[i] && b[i]==b[i+1] )) || ((a[i]==b[i] && b[i]==a[i-1] ) || (a[i]==b[i] && b[i]==b[i-1] ))){
            printf("YES");
            n=1;
            break;
        }
        if(((c[i]==b[i] && b[i]==c[i+1] ) || (c[i]==b[i] && b[i]==b[i+1])) || ((c[i]==b[i] && b[i]==c[i-1] ) || (c[i]==b[i] && b[i]==b[i-1] ))){
            printf("YES");
            n=1;
            break;
        }
        if(((c[i]==d[i] && d[i]==c[i+1] ) || (c[i]==d[i] && d[i]==d[i+1] )) || ((c[i]==d[i] && d[i]==c[i-1] ) || (c[i]==d[i] && d[i]==d[i-1] ))){
            printf("YES");
            n=1;
            break;
        }
    }
    if(n==0){
        printf("NO");
    }

    return 0;
}