//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        if(arr[0]<=arr[n-1]){
            return arr[0];
        }
        for(int i=0;i<=n/2;i++){
            if(arr[n-1-i]<arr[n-2-i]){
                return arr[n-1-i];
            }
            if(arr[i+1]<arr[i]){
                return arr[i+1];
            }
        }
        return arr[n/2];
    }
};