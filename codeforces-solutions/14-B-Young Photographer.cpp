#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,a,lo=0,hi=9999,c,d,e,f;
        cin >> n>>a;
        for(int i=0;i<n;i++){
            cin >> e >> f;
            c=min(e,f);
            d=max(e,f);
            if((c<lo && d<lo) || (c>hi && d>hi) ){
                cout << -1;
                return;
            }else if(c<lo && d>hi){
                continue;
            }else{
                if(c>lo){
                    lo=c;
                }
                if(d<hi){
                    hi=d;
                }
            }
        }
        if(a>=lo && a<=hi){
            cout << 0 ;
            return;
        }
        cout << min(abs(a-hi),abs(a-lo));
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