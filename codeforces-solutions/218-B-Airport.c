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
    int n,m,max=0,min=0,sum=0,z,c=0;
    scanf("%d%d", &n,&m);
    int arr[m],arr2[m];
    for(int i=0;i<m;i++){
        scanf("%d", &arr[i]);
    }
    z=n;
    for(int i=0;i<m;i++){
        arr2[i]=arr[i];
    }
    qsort(arr2,m,4,ascending);
    for(int i=0;;i){
        min+=arr2[i];
        arr2[i]--;
        z--;
        if(arr2[i]==0){arr2[i]=99999;}
        if(z==0){break;}
        qsort(arr2,m,4,ascending);       
    }
    qsort(arr,m,4,descending);
    for(int i=0;;i){
        max+=arr[i%m];
        arr[i%m]--;
        c++;
        if(c==n){break;}
        qsort(arr,m,4,descending);
    }
    printf("%d %d", max,min);
    return 0;
}