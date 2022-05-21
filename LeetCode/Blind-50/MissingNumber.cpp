//https://leetcode.com/problems/missing-number/submissions/

class Solution {
public:
    int missingNumber(vector<int>& n) {
        vector<int>::iterator it;
        
        for(int i=0;i<=n.size();i++){
            it = find (n.begin(), n.end(), i);
            if (it == n.end()){
                return i;
            }
        }
        return -1;
    }
};