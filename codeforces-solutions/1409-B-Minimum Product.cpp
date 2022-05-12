#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        ll a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;
        ll c,d,MIN=9999999999;
        c=a;
        d=b;
        if(c-n>=x){
            c-=n;
        }else{
            c=x;
            if((d-(n-(a-x)))>=y){
                d-=n-(a-x);
            }else{
                d=y;
            }
        }
        MIN=c*d;
        c=a;
        d=b;
        if(d-n>=y){
            d-=n;
        }else{
            d=y;
            if((c-(n-(b-y)))>=x){
                c-=n-(b-y);
            }else{
                c=x;
            }
        }
        MIN=min(MIN,c*d);
        cout << MIN << "\n";
        
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