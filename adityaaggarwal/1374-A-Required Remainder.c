#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x,y,n;
        scanf("%d%d%d",&x,&y,&n);
        
        if(((n%x)-y)>=0){
            printf("%d\n", n-((n%x)-y));
        }
        else{
            printf("%d\n", n-(n%x)+y-x);
        }
        
    }
    return 0;
}