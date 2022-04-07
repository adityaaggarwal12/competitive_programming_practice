#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int a,b;
        cin >> a>>b;
        if(a==b){
            cout << 0 << "\n";
        }
        else if(a>b){
            if((a-b)%2==0){
                cout << 1 << "\n";
            }
            else{
                cout << 2 << "\n";
            }
        }
        else{
            if((b-a)%2!=0){
                cout << 1 << "\n";
            }
            else{
                cout << 2 << "\n";
            }
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