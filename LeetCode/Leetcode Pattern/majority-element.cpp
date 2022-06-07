//https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& n) {
        unordered_map<int,int> u1;
        for(int i=0;i<n.size();i++){
            u1[n[i]]++;
        }
        for(int i=0;i<n.size();i++){
            if(u1[n[i]]>(n.size()/2)){
                return n[i];
            }
        }
        return -1;
    }
};