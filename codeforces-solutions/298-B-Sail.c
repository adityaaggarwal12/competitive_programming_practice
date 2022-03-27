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
    int t,x,y,x1,y1,n=0;;
    scanf("%d%d%d%d%d",&t,&x,&y,&x1,&y1);
    x=x-x1;
    y=y-y1;
    char c[t];
    scanf("%s",c);
    for(int i=0;i<t;i++){
        if(c[i]=='N'){
            if((abs)(y+1)<(abs)(y)){
                y++;
            }
        }
        else if(c[i]=='S'){
            if((abs)(y-1)<(abs)(y)){
                y--;
            }
        }
        else if(c[i]=='E'){
            if((abs)(x+1)<(abs)(x)){
                x++;
            }
        }
        else if(c[i]=='W'){
            if((abs)(x-1)<(abs)(x)){
                x--;
            }
        }
        n++;
        if((x==0) && (y==0)){
            printf("%d", n);
            break;
        }
        if((i==t-1) && (x!=0 || y!=0)){
            printf("-1");
        }
    }
    return 0;
}