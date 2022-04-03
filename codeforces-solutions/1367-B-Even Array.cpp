#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,countE=0,countO=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if((i%2)!=(arr[i]%2)){
                if(arr[i]%2==0){
                    countE++;
                }
                else{
                    countO++;
                }

            }
        }
        if(countE!=countO){
            cout << -1 << "\n";
        }
        else{
            cout << countE << "\n";
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