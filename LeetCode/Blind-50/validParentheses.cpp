//https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        int a1=0,a2=0,b1=0,b2=0,c1=0,c2=0;
        vector<char> v={'a'};
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                v.push_back(s[i]);
                a1++;
            }else if(s[i]==')'){
                if(v[v.size()-1]!='('){
                    return false;
                }
                v.pop_back();
                a2++;
            }else if(s[i]=='['){
                v.push_back(s[i]);
                b1++;
            }else if(s[i]==']'){
                if(v[v.size()-1]!='['){
                    return false;
                }
                v.pop_back();
                b2++;
            }else if(s[i]=='{'){
                v.push_back(s[i]);
                c1++;
            }else if(s[i]=='}'){
                if(v[v.size()-1]!='{'){
                    return false;
                }
                v.pop_back();
                c2++;
            }
            if(a1<a2 || b1<b2 || c1<c2){
                return false;
            }
        }
        if(a1==a2 && b1==b2 && c1==c2){
            return true;
        }else{
            return false;
        }
    }
};