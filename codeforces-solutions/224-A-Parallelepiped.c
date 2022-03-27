#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,y,z,ans;
    scanf("%d %d %d", &x,&y,&z);
    ans=4*(sqrt(x*y/z)+sqrt(x*z/y)+sqrt(z*y/x));
    printf("%d", ans);
    return 0;
}