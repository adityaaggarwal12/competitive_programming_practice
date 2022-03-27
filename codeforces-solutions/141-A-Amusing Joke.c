#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char a[101],b[101],c[101];
    int count=0;
    gets(a);
    gets(b);
    gets(c);
    int x=strlen(a),y=strlen(b),z=strlen(c);
    if((x+y)!=z){
        printf("NO");
    }
    else{
        for(int i=0;i<z;i++){
            for(int j=0;j<x;j++){
                if(c[i]==a[j]){
                    count++;
                    c[i]='b';
                    a[j]='a';
                    break;
                }
            }
            for(int j=0;j<y;j++){
                if(c[i]==b[j]){
                    count++;
                    c[i]='c';
                    b[j]='d';
                    break;
                }
            }
        }
        if(count==z){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}