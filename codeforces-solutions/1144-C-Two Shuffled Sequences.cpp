#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,x;
        cin >> n;
        vector<int> v,inc,dec;
        unordered_map<int ,int> u1;
        for(int i=0;i<n;i++){
            cin >> x;
            v.push_back(x);
        }
        for(int i=0;i<n;i++){
            u1[v[i]]++;
            if(u1[v[i]]>=3){
                cout << "NO";
                return;
            }
        }
        cout << "YES" << "\n";
        for(int i=0;i<n;i++){
            if(u1[v[i]]==2){
                dec.push_back(v[i]);
                u1[v[i]]--;
            }else{
                inc.push_back(v[i]);
            }
        }
        sort(inc.begin(),inc.end());
        sort(dec.rbegin(),dec.rend());
        cout << inc.size() << "\n";
        for(int i=0;i<inc.size();i++){
            cout << inc[i] << " ";
        }
        cout << "\n" << dec.size() << "\n";
        for(int i=0;i<dec.size();i++){
            cout << dec[i] << " ";
        }

        
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