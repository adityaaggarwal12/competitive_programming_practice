#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,one,two,count=0,start=0,indicator,reg=999999,palin=999999,indicator2;
        cin >> n;
        string s;
        cin >> s;
        do{
            indicator=0;one=0;two=0;reg=999999;palin=999999;indicator2=0;
            for(int i=start;i<n;i++){
                if(s[i]=='('){
                    one++;
                }else{
                    two++;
                }
                if(two>one)break;
                if(one==two){
                    reg=i+1;
                    indicator2=1;
                    //cout << reg << "-reg" << "\n";
                    break;
                }
            }
            for(int i=start;i<n;i++){
                if(i==start)continue; 
                // cout << i << "\n";
                for(int j=0;j<=((i-start)/2);j++){
                    if(s[j+start]!=s[i-j]){
                        break;
                    }else if(j==((i-start)/2)){
                        palin=i+1;
                        indicator=1;
                        // cout << "ooooo";
                        //cout << reg << "-palin" << "\n";
                        //cout << i <<" " << start  << "-uu" <<  "\n";
                        break;
                    }
                }
                if(indicator==1)break;
            }
            if(indicator==1 || indicator2==1){
                count++;
                start=min(reg,palin);
                // cout << start << "oo" << "\n";
            }
        } while ((indicator!=0 || indicator2!=0) && start<n);

        cout << count  << " " << n-start << "\n";
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