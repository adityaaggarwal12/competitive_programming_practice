#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,m,b;
    scanf("%d %d", &n,&m);
    for(int i=n+1;i<51;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                break;
            }
            else if(j==(i-1)){
                b=i;
                i=51;
                break;
                
            }
        }
    }
    if(b==m){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}