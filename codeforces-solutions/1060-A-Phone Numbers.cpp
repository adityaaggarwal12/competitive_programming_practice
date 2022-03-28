#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n;
        cin >> n;
        int count8=0,count11=0;
        string s;
        cin >> s;
        for(int i=0;i<n;i++){
            if(s[i]=='8'){
                count8++;
            }
        }
        count11=floor(n/11);
        // cout << count11 << " " << count8;
        if(count11>count8){
            cout << count8;
        }
        else{
            cout << count11;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    solve(t);
    return 0;
}