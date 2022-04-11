#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        string x,y;
        cin >> x >> y;
        for(int i=0;i<x.size();i++){
            if((int)y[i]>(int)x[i]){
                cout << -1;
                return;
            }
        }
        cout << y;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    solve(t);
    return 0;
}