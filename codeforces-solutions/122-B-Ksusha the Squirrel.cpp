#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,x,c;
        cin >> n >> x;;
        string s;
        cin >> s;
        c=x;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                if(c==1){
                    cout << "NO";
                    return;
                }else{
                    c--;
                }
            }
            else{
                c=x;
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