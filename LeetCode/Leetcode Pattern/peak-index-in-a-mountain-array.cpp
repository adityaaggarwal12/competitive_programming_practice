//https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        for(int i=0;i<a.size();i++){
            if(a[i]>a[i+1]){
                return i;
            }
        }
        return -1;
    }
};