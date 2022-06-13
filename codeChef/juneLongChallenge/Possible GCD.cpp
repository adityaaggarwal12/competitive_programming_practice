//https://www.codechef.com/JUNE221C/problems/DISTGCD
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        long long int n,a,b;
        cin >> a >>b;
        n=abs(a-b);
        long long int ans=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i){
                    ans+=1;
                }else{
                    ans+=2;
                }
            }
        }
        cout << ans<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    solve(t);
    return 0;
}