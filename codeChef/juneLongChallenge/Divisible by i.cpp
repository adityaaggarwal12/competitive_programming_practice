//https://www.codechef.com/JUNE221C/problems/DIVBYI

#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n;
        cin >> n;
        int hi=n-1,lo=0;
        vector<int> v,tt(n);
        for(int i=0;i<n;i++){
            tt[i]=i+1;
        }
        for(int i=0;i<=n;i++){
            if(i%2==0){
                v.push_back(tt[hi]);
                hi--;
            }else{
                v.push_back(tt[lo]);
                lo++;
            }
        }
        for(int i=n-1;i>=0;i--){
            cout << v[i] << " ";
        }
        cout << "\n";


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