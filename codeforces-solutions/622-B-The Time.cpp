#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        string s;
        int n,AddHr,Amin,hr,min;
        cin >> s >> n;
        // Ahr=n/60;
        // Amin=n%60;
        //--
        hr=((int)s[0]-48)*10;
        hr+=(int)s[1]-48;
        min=((int)s[3]-48)*10;
        min+=(int)s[4]-48;
        //cout << hr << " " << min ;
        min+=n;
        AddHr=min/60;
        min=min%60;
        hr+=AddHr;
        hr%=24;
        if(hr/10==0 && min/10==0) {
            cout << 0 << hr << ':'  <<0<< min;
        }
        else if(min/10==0){
            cout << hr << ':'  <<0<< min;
        }
        else if(hr/10==0){
            cout << 0 << hr << ':' << min;
        }
        else{cout << hr << ':' << min;}
        
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