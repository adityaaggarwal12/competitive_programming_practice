#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    int a,g;
    cin >> a;
    g=a;
    while (t--){
        int c,d;
        cin >> c >> d;
        int f;
        f=min(c,d);
        if(f>a){
            a=f;
        }
        
    }
    cout << g-a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    solve(t);
    return 0;
}