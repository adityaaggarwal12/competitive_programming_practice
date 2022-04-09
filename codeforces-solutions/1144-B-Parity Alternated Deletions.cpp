#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        ll n,e=0,o=0,sum=0,count=0;
        cin >> n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]%2==0){
                e++;
            }else{
                o++;
            }
        }
        if(e==o || abs(e-o)==1){
            cout << 0;
            return;
        }
        else{
            sort(arr,arr+n);
            if(e>o){
                for(ll i=0;i<n;i++){
                    if(count==e-o-1){
                        break;
                    }
                    if(arr[i]%2==0){
                        sum+=arr[i];
                        count++;
                    }
                }
            }else{
                for(ll i=0;i<n;i++){
                    if(count==o-e-1){
                        break;
                    }
                    if(arr[i]%2!=0){
                        sum+=arr[i];
                        count++;
                    }
                }
            }
        }
        cout<<sum;
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