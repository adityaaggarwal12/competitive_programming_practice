#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char arr[100];
    scanf("%s", arr);
    int n=strlen(arr);
    int count=n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count--;
                break;
            }
        }
    }
    if(count%2==0){
        printf("CHAT WITH HER!");
    }
    else{printf("IGNORE HIM!");}
    

    return 0;
}