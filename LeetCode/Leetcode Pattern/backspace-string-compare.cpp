//https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> a,b;
        int bck=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='#'){
                bck++;
            }else if(bck!=0){
                s[i]='#';
                bck--;
            }
        }
        bck=0;
        for(int i=t.size()-1;i>=0;i--){
            if(t[i]=='#'){
                bck++;
            }else if(bck!=0){
                t[i]='#';
                bck--;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                a.push_back(s[i]);
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
                b.push_back(t[i]);
            }
        }
        // cout << a << " " << b <<"\n"; 
        if(a.size()!=b.size()){
            return false;
        }
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                return false;
            }
        } 
        return true;
    }
};