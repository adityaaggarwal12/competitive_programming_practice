#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,m,count=0,ck=0,cc=0;
        cin >> n >> m;
        int arr[10] = {6,2,5,5,4,5,6,3,7,6};
        for(int i=n;i<=m;i++){
            cc=i;
            while(cc>0){
                ck=cc%10;
                count+=arr[ck];
                cc/=10;
            }
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