//https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int max1=-99999,sum=-99999;
        for(int i=0;i<a.size();i++){
            sum=max(sum+a[i],a[i]);
            max1=max(sum,max1);
        }
        return max1;
    }
};