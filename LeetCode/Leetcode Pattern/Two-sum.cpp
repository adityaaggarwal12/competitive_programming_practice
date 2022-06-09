//https://leetcode.com/problems/two-sum/


//BRUTE FORCE:------
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

//OPTIMIZED:----
class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int nn=n.size();
        vector<int> ans;
        unordered_map<int,int> u1;
        for(int i=0;i<nn;i++){
            if(u1.find(t-n[i])!=u1.end()){
                ans.push_back(u1[t-n[i]]);
                ans.push_back(i);
                return ans;
            }
            u1[n[i]]=i;
        }
        return ans;
    }
};