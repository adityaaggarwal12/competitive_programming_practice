#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int oof = 0;
    for(int a = 3; a <= n-2; a++){
        for(int b = a+1; b <= n-1; b++){
            int x = sqrt((a*a) + (b*b));
            if(x*x == (a*a + b*b) && x <=n){
                oof++;
            }
        }
    }
    cout << oof;

}