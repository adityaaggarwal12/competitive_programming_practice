#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,x,count=0;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin >> x;
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        for(int i=1;i<n;i+=2){
            count+=v[i-1]-v[i];
        }
        cout  << count ;
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