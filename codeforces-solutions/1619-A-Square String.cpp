#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        string s;
        cin >> s;
        if(s.size()%2!=0){
            cout << "NO"<<"\n";
            continue;
        }
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()/2+i]){
                cout  << "NO" << "\n";
                break;
            }
            else if(i==(s.size()/2)-1){
                cout << "YES"<<"\n";
            }
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