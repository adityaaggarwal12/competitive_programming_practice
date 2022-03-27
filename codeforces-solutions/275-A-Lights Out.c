#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int arr[30][30],count=0,x[1000],y[1000];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]!=0){
                x[count]=i;
                y[count]=j;
                count++;
            }
        }
    }
    int arr2[30][30]={{1,1,1},{1,1,1},{1,1,1}};
    for(int i=0;i<count;i++){
        if(((arr[x[i]][y[i]])%2)==1){
            if(arr2[x[i]][y[i]]==1){
                arr2[(x[i])][(y[i])]=0;
            }
            else{arr2[x[i]][y[i]]=1;}

            if(arr2[x[i]+1][y[i]]==1){
                arr2[x[i]+1][y[i]]=0;
            }
            else{arr2[x[i]+1][y[i]]=1;}

            if(arr2[x[i]-1][y[i]]==1){
                arr2[x[i]-1][y[i]]=0;
            }
            else{arr2[x[i]-1][y[i]]=1;}

            if(arr2[x[i]][y[i]+1]==1){
                arr2[x[i]][y[i]+1]=0;
            }
            else{arr2[x[i]][y[i]+1]=1;}

            if(arr2[x[i]][y[i]-1]==1){
                arr2[x[i]][y[i]-1]=0;
            }
            else{arr2[x[i]][y[i]-1]=1;}
        }
    }
    for(int i=0;i<3;i++){
        printf("%d%d%d\n", arr2[i][0],arr2[i][1],arr2[i][2]);
    }

    return 0;
}