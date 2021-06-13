#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,k,g,t,count=0;
    scanf("%d%d", &n,&k);
    char c[101];
    scanf("%s", c);
    for(int i=0;i<n;i++){
        if(c[i]=='G'){
            g=i;
        }
        else if(c[i]=='T'){
            t=i;
        }
    }
    // printf("%d%d",g,t);
    if((g-t)%k!=0){
        printf("NO");
    }
    else{
        if(t>g){
            for(int i=g+k;i<=t;i+=k){
                if(c[i]=='#'){
                    printf("NO");
                    break;
                }
                if(i==t){
                    printf("YES");
                }
            }
        }
        else{
            for(int i=g-k;i>=t;i-=k){
                if(c[i]=='#'){
                    printf("NO");
                    break;
                }
                if(i==t){
                    printf("YES");
                }
            }

        }
    }
    return 0;
}