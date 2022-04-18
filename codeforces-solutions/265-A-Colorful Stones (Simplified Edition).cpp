#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        string s,t;
        cin >> s >> t;
        int n,count=0;
        // n= min(s.size(),t.size());
        for(int i=0;i<t.size();i++){
            if(s[count]==t[i]){
                count++;
                if(count==s.size()-1){
                    break;
                }
            }
        }
        cout << count+1;
        
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