#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        string s;
        cin >> s;
        int hr,min;
        hr=((int)s[0]-48)*10;
        hr+=((int)s[1]-48);
        min=((int)s[3]-48)*10;
        min+=((int)s[4]-48);
        if(hr>12){
            hr-=12;
        }
        float aHr,aMin;
        aHr=((hr*30)+(min*30/60.0));
        aMin=(min*6);
        if(hr==12){
            aHr=min*30/60.0;
        }
        cout << aHr << " " << aMin;
        
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