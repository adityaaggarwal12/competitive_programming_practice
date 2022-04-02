#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int a,b,c,d,sum=0;
        cin >> a >> b >> c >> d;
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                sum+=a;
            }
            else if(s[i]=='2'){
                sum+=b;
            }
            else if(s[i]=='3'){
                sum+=c;
            }
            else if(s[i]=='4'){
                sum+=d;
            }
        }
        cout << sum;
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