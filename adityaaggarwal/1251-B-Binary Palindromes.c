#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,odd=0,badeve=0,goodeve=0;
        scanf("%d", &n);
        while(n--){
            char s[51];
            int count1=0,count0=0;
            scanf("%s", s);
            if(strlen(s)%2==1){
                odd++;
            }
            else{
                for(int i=0;i<strlen(s);i++){
                    if(s[i]=='1'){
                        count1++;
                    }
                    else{
                        count0++;
                    }
                }
                if(count0%2==0 && count1%2==0){
                    goodeve++;
                }
                else{
                    badeve++;
                }
            }
        }
        int ans=0;
        ans+=goodeve;
        ans+=odd;
        if(badeve%2==0){
            ans+=badeve;
        }
        else{
            ans+=(badeve-1);
        }
        if(odd>0 && badeve%2==1){
            ans++;
        }
        printf("%d\n", ans);

    
        
    }
    return 0;
}