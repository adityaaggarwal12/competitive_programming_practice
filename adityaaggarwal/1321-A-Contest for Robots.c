#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,y;
    float x;
    scanf("%d", &n);
    int robo[n],bio[n],count1=0,count2=0;
    for(int i=0;i<n;i++){
        scanf("%d ", &robo[i]);
        count1+=robo[i];
    }
    for(int i=0;i<n;i++){
        scanf("%d ", &bio[i]);
        count2+=bio[i];
    }
    for(int i=0;i<n;i++){
        if(robo[i]==1 && bio[i]==1){
            count1--;
            count2--;
        }
    }


    if( count1==0 || count2==n){
        printf("-1");
    }
    else {
        printf("%d", count2/count1+1);
        
 
    }

    return 0;
}