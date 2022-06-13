//https://www.codechef.com/JUNE221C/problems/ALTERADD

#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,x;
        cin >> n >> x;
        if((x-n)%3==0 || (x-n)%3==1){
            cout << "yes" <<"\n";
        }else{
            cout << "no" << "\n";
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