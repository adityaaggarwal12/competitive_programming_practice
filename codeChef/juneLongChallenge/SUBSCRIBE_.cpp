//https://www.codechef.com/JUNE221C/problems/SUBSCRIBE_

#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,x;
        cin >> n >> x;
        int ans=n/6;
        if(n%6!=0){
            ans++;
        }
        cout << ans*x << "\n";
        
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