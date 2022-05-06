#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n;
        cin >> n;
        int x[n];
        int d[n];
        for(int i=0;i<n;i++){
            cin >>x[i]>>d[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(x[i]+d[i]==x[j] && x[j]+d[j]==x[i]){
                    cout << "YES";
                    return;
                }
            }
        }
        cout << "NO";

        
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