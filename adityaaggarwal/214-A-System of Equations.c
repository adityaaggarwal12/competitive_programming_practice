#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,m,count=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if((((j*j)+i)==n) && ((j+(i*i))==m)){
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}