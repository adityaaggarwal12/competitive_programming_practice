#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,k,x,min=999999,index,sum=0;
        cin >> n >> k;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin >> x;
            v.push_back(x);
        }
        for(int j=0;j<k;j++){
            sum+=v[j];
        }
        min=sum;
        index=0;
        for(int i=1;i<n-(k-1);i++){
            sum-=v[i-1];
            sum+=v[i+k-1];
            // for(int j=i;j<i+k;j++){
            //     sum+=v[j];
            // }
            //cout << sum << " " ;
            if(sum<min){
                index=i;
                min=sum;
            }
        }
        cout  << index+1;
        
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