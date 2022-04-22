#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,x;
        cin >> n >> x;
        if(n == x){
            if(n%2==0){
                cout << n << "\n";
            }      
            else{
                cout << n*-1 << "\n";
            }
        }
        else if(n%2==0){
            if(x%2==0){
                cout << x-((x-n)/2) << "\n";
            }else{
                cout << (-1)*((((x-1)-n)/2)+1) << "\n";
            }
        }
        else{
            if(x%2==0){
                cout << (x-(n-1))/2 << "\n";
            }else{
                cout<< (-1)*(n+((x-n)/2)) << "\n";
            }
            // cout << 0 << "\n";
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