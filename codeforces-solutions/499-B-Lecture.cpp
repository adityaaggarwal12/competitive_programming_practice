#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,m;
        string x,y;
        cin >> n >> m;
        vector <string> l1,l2,phrase;
        for(int i=0;i<m;i++){
            cin >> x>> y;
            l1.push_back(x);
            l2.push_back(y);
        }
        for(int i=0;i<n;i++){
            cin >>x;
            phrase.push_back(x);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(phrase[i]==l1[j]){
                    if(l1[j].size() > l2[j].size()){
                        cout << l2[j] << " ";
                    }else{
                        cout << l1[j] << " ";
                    }
                }
            }
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