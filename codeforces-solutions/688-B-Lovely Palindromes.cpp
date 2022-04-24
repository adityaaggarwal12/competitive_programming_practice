#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        string s,v;
        cin >> s;
        v=s;
        reverse(s.begin(),s.end());
        cout << v << s;

        
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