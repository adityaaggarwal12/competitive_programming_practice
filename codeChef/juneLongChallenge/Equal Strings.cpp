//https://www.codechef.com/JUNE221C/problems/EQUALSTRING

#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,ans=0;
        cin >> n;
        string a,b;
        cin >> a >> b;
        unordered_map<char,int> u;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                u[b[i]]++;
            }
        }
        for(int i=0;i<n;i++){
            if(u.find(b[i])!=u.end() && u[b[i]]!=0){
                ans++;
                u[b[i]]=0;
            }
        }
        cout << ans << "\n";
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