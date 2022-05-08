#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,ans=-1;
        cin >> n;
        int a[n],b[n],c[n],d[n];
        for(int i=0;i<n;i++){
            cin >> a[i] >> b[i] >> c[i] >> d[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]<a[j] && b[i]<b[j] && c[i]<c[j]){
                    break;
                }else if(j==n-1){
                    if((d[i]<d[ans]) || ans==-1){
                        ans=i;
                    }
                }
            }
        }
        cout<<ans+1;
        
        
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