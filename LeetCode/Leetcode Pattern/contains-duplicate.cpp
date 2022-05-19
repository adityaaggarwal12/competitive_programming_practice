//https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> u1;
        for(int i=0;i<nums.size();i++){
            if(u1[nums[i]]==1){
                return true;
            }
            u1[nums[i]]++;
        }
        return false;
    }
};