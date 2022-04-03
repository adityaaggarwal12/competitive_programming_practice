#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,sus=1;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<26;i++){
            for(int j=0;j<n;j++){
                if((int)s[j]==65+i || (int)s[j]==97+i){
                    break;
                }
                else if(j==(n-1)){
                    cout << "NO";
                    return;
                }
            }
        }
        cout << "YES";
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