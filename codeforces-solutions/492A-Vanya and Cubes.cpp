#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,count=0,i=1;
        cin >> n;
        while(n>=(i*(i+1)/2)){
            count++;
            n-=(i*(i+1)/2);
            i++;
        }
        cout << count;
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