//https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& n) {
        unordered_map<int,int> u;
        for(int i=0;i<n.size();i++){
            u[n[i]]++;
            if(u[n[i]]==2){
                return n[i];
            }
        }
        return -1;
        
    }
};