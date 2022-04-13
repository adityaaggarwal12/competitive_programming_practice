#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,x,k;
        cin >> n >> k;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout << v[n-k];
        
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