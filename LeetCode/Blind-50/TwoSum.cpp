
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solution s;
    vector<int> v={1,2,3,4},hh;
    hh=s.twoSum(v,6);
    for(int i=0;i<hh.size();i++){
        cout << hh[i] << " ";
    }
    return 0;
}