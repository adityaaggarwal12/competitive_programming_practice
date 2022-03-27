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
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[300],hue=0;
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
            for(int j=i-1;j>=0;j--){
                if(arr[i]==arr[j]){
                    hue=1;
                }
            }
        }
        if(hue==1){
            printf("NO\n");
        }
        else{
            for(int i=0;i<n;i++){
                if(n>300){break;}
                for(int j=0;j<n;j++){
                    if(n>300){break;}
                    for(int k=0;k<n;k++){
                        if(n>300){break;}
                        if((abs)(arr[i]-arr[j])==arr[k]){
                            break;
                        }
                        else if(k==n-1){
                            arr[n]=(abs)(arr[i]-arr[j]);
                            n++;
                            break;
                        }
                    }
                }
            }
            if(n>300){printf("NO");}
            else{
                printf("yes\n%d\n", n);
                for(int i=0;i<n;i++){
                    printf("%d ", arr[i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}