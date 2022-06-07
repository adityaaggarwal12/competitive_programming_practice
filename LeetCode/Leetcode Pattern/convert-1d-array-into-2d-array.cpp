//https://leetcode.com/problems/convert-1d-array-into-2d-array/

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        vector<vector<int>> ans;
        vector<int> v;
        if(o.size()!=m*n){
            return ans;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v.push_back(o[(i*n)+j]);
            }
            ans.push_back(v);
            v.clear();
            
        }
        return ans;
    }
};