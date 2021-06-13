#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,count1=0,count2=0,count3=0;
    scanf("%d", &n);
    int arr[n],b=99999,x[5000],y[5000],z[5000];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
        if(arr[i]==1){
            x[count1]=(i+1);
            count1++;
        }
        else if(arr[i]==2){
            y[count2]=(i+1);
            count2++;
        }
        else if(arr[i]==3){
            z[count3]=(i+1);
            count3++;     
        }
    }
    if(count1<b){b=count1;}
    if(count2<b){b=count2;}
    if(count3<b){b=count3;}
    printf("%d\n", b);
    for(int i=0;i<b;i++){
        printf("%d %d %d\n", x[i],y[i],z[i]);
    }

    return 0;
}
