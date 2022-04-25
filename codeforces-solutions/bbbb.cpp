#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        string s,c;
        int fff=0;
        cin >> s >> c;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<c.size();j++){
                if(s[i]==c[j]){
                    fff=1;
                    break;
                }
            }
            if(fff==1){
                break;
            }
        }
        if(fff==1){
            cout << "yes" << "\n";
        }
        cout << "no" << "\n";
        
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