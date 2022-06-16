//https://leetcode.com/problems/first-missing-positive/
//hard problem

class Solution {
public:
    int firstMissingPositive(vector<int>& nn) {
        int n=nn.size();
        unordered_map<int,int> u1;
        for(int i=0;i<n;i++){
            u1[nn[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(u1[i]==0){
                return i;
            }
        }
        return n+1;
    }
};