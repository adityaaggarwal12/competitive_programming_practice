#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,m,b=0,count=0,d;
    float f;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    int arr2[m];
    for(int i=0;i<m;i++){
        scanf("%d", &arr2[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            d=(int)(arr2[i]/arr[j]);
            f=(float)arr2[i]/arr[j];
            if(d==f){
                if((arr2[i]/arr[j])>b){
                    count=0;
                }
                if((arr2[i]/arr[j])>=b){
                    b=(arr2[i]/arr[j]);
                    count++;
                }
            }
            else{
                continue;
            }


        }
    }
    printf("%d", count);
    return 0;
}