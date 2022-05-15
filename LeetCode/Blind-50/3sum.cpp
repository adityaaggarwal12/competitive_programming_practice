//https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        vector<vector<int>> v1={};
        if(n.size()<3){
            return v1;
        }
        for(int i=0;i<n.size()-2;i++){
            for(int j=i+1;j<n.size()-1;j++){
                for(int k=j+1;k<n.size();k++){
                    if((n[i]+n[j]+n[k])==0){
                        v1.push_back({n[i],n[j],n[k]});
                    }
                }
            }
        }
        return v1;
    }
};