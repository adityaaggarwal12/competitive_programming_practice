#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        string x;
		cin >> x;
		int dig = x[0] - '0' - 1;
		int len = x.size();
		cout << dig * 10 + len * (len + 1) / 2 << endl;
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
