//https://www.codechef.com/JUNE221C/problems/RED0

#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        unsigned long long int x,y,ccc = 0;
        unsigned long long int minimum,maximum,ans = 0;
        cin>>x>>y;
        minimum = min(x,y);
        maximum = max(x,y);
        if(x==y){
            cout<<x<<"\n";
            continue;
        }
        if((x==0)||(y==0)) {
            cout<<-1<<"\n";
            continue;
        }
        
        while(true){
            minimum=minimum*2;
            ccc++;
            if(minimum>=maximum){
                minimum=minimum/2;
                ccc--;
                break;
            }
        }
        ans=ans+ccc;
        ccc = minimum-(maximum-minimum);
        minimum=minimum-ccc;
        maximum=maximum-ccc;
        ans=ans+ccc;
            ans++;
            ccc=maximum;
        ans=ans+ccc;
        cout<<ans<<"\n";
        
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