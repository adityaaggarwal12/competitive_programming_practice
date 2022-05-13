//https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> u1;
        int n=s.size(),m=t.size();
        if(n!=m){
            return false;
        }
        for(int i=0;i<n;i++){
            u1[s[i]]++;
        }
        for(int i=0;i<m;i++){
            if(u1[t[i]]==0){
                return false;
            }
            u1[t[i]]--;
        }
        return true;
        
    }
};