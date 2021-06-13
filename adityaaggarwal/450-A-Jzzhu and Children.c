#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,m,b=0,final,z=0,f;
    float x;
    scanf("%d%d", &n,&m);
    int arr[n],arr2[100],arr3[100];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>m){
            f=arr[i]/m;
            x=(float)arr[i]/m;
            if(f==x){
                if(f>=b){
                    final=i;
                    b=f;
                }
            }
            else{
                if((f+1)>=b){
                    final=i;
                    b=f+1;
                }
            }
        }
        else{
            z++;
        }
    }
    if(z==n){
        printf("%d", n);
    }
    else{
        printf("%d", (final+1));
    }
    
    return 0;
}