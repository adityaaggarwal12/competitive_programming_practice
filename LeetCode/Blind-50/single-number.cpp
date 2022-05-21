//https://leetcode.com/problems/single-number/
class Solution {
public:
    int singleNumber(vector<int>& n) {
        unordered_map<int,int> u;
        for(int i=0;i<n.size();i++){
            u[n[i]]++;
        }
        for(int i=0;i<n.size();i++){
            if(u[n[i]]==1){
                return n[i];
            }
        }
        return -1;
    }
};