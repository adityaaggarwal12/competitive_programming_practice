#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int a,b,c,n;
        cin >> a >> b >> c >> n;
        int e;
        e=max(a,b);
        e=max(e,c);
        // cout << e << "\n";
        // n-=((e-a)+(e-b)+(e-c));
        // cout << n << "\n";
        if(n>=((e-a)+(e-b)+(e-c))){
            n-=((e-a)+(e-b)+(e-c));
            if(n%3==0){
                cout<<"YES"<<"\n";
                continue;
            }
            else{
                cout << "NO"<<"\n";
                continue;
            }
        }
        else{
            cout << "NO"<<"\n";
            continue;
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