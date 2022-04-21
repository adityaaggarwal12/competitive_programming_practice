#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        string s, j;
        cin >> s >> j;
        int lul = 0;
        for(int i=0; i<s.length();i++){
            if (s[i] == j[0] && i % 2 == 0){
                lul = 1;
            }
        }
        cout << (lul==1 ? "YES" : "NO") << endl;
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