#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n;
        cin >> n;
        int a=0;
        for(int i=0;i<n;i++){
            a++;
            while(a%3==0 || a%10==3){
                a++;
            }
        }
        cout << a << "\n";
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