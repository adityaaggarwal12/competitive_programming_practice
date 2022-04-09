#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        ll n,x,mid,a=0,b=0;
        cin >> n;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            cin >> x;
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        if(v.size()%2==0){
            mid=n/2;
        }else{
            mid=(n+1)/2;
        }
        for(ll i=0;i<n;i++){
            if(i<mid){
                a+=v[i];
            }else{
                b+=v[i];
            }
        }
        // cout << a << " "  << b;
        cout << (a*a)+(b*b);
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