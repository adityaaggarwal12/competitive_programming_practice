#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,count=0;
        cin >> n;
        if(n<10){
            cout << n << "\n";
            continue;
        }
        else{
            for(int i=1;i<=n;i=(i*10)+1){
                for(int j=1;j<=9;j++){
                    if(i*j<=n){
                        count++;
                    }
                }
            }
        }
        cout << count << "\n";
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