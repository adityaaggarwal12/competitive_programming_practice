//https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        unordered_map<int,int> u;
        vector<int> ans;
        for(int i=0;i<n.size();i++){
            u[n[i]]++;
            if(u[n[i]]==2){
                ans.push_back(n[i]);
            }
        }
        return ans;
        
    }
};