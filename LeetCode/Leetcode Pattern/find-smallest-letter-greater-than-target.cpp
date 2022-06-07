//https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        for(int i=0;i<l.size();i++){
            if(int(l[i])>int(t)){
                return l[i];
            }
        }
        return l[0];
    }
};