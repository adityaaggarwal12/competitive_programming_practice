#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,m,lool=0;
        cin >> n >> m;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<m;i++){
            cin >> b[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]==b[j]){
                    cout << "YES" << "\n" << 1 << " " << a[i] << "\n";
                    lool=1;
                    break;
                }
            }
            if(lool==1){
                break;
            }
        }
        if(lool==0){
            cout << "NO" << "\n";
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