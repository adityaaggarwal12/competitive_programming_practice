#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,x,max1=0,max2=0,min1=0,min2=-1;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin >> x;
            v.push_back(x);
            if(v[i]>v[max1]){
                max1=i;
            }
            if(v[i]<v[min1]){
                min1=i;
            }
        }
        if(n==2 || n==1){
            cout << 0;
            return;
        }
        (max1==n-1)?max2=max1-1:max2=max1+1;
        (min1==n-1)?min2=min1-1:min2=min1+1;
        for(int i=0;i<n;i++){
            if(v[i]>v[max2] && max1!=i){
                max2=i;
            }
            if(v[i]<v[min2] && min1!=i){
                min2=i;
            }
        }
        // cout << v[max1] << " " << v[max2] << " " << v[min1] <<  " " << v[min2] << "\n";
        cout << min(min(v[max1]-v[min1],v[max1]-v[min2]),v[max2]-v[min1]);
        
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