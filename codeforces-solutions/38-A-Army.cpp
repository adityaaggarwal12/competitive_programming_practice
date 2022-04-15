#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n;
        cin >> n;
        int v[n];
        for(int i=0;i<n-1;i++){
            cin >> v[i];
        }
        int sum=0,a,b;
        cin >> a >> b;
        for(int j=a-1;j<b-1;j++){
            sum+=v[j];
        }
        cout << sum;
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