#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,x;
        cin >> n >> x;
        if(n == x){
            cout << (n%2==0)?n:(n*-1);
            cout << "\n";        
        }
        else{
            cout << 0 << '\n';
        }
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