#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,m,count=0;
        cin >> n >> m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((abs(arr[i]-arr[j]))<=m){
                    count+=2;
                }
            }
        }
        cout << count << "\n";

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