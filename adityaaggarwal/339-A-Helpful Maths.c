#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char c[100];
    int num1=0,num2=0,num3=0,numplus=0;
    scanf("%s", c);
    int n=strlen(c);
    for(int i=0;i<n;i++){
        if(c[i]=='1'){
            num1++;
        }
        if(c[i]=='2'){
            num2++;
        }
        if(c[i]=='3'){
            num3++;
        }
        if(c[i]=='+'){
            numplus++;
        }
    }
    for(int i=0;i<n;i++){
        if(num1>0){
            if(numplus>0){
                printf("1+");
                num1--;
                numplus--;
            }
            else{
                printf("1");
                num1--;
            }
        }
        else if(num2>0){
            if(numplus>0){
                printf("2+");
                num2--;
                numplus--;
            }
            else{
                printf("2");
                num2--;
            }
        }
        else if(num3>0){
            if(numplus>0){
                printf("3+");
                num3--;
                numplus--;
            }
            else{
                printf("3");
                num3--;
            }
        }
    }

    return 0;
}