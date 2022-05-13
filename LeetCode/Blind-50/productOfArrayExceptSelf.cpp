//https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int zero=0;
        long long mul=1;
        for(int i=0;i<n.size();i++){
            if(n[i]==0){
                zero++;
            }else{
                mul*=n[i];
            }
        }
        vector<int> ans;
        for(int i=0;i<n.size();i++){
            if(zero>1){
                ans.push_back(0);
            }else if(zero==1){
                if(n[i]==0){
                    ans.push_back(mul);
                }else{
                    ans.push_back(0);
                }
            }else{
                ans.push_back(mul/n[i]);
            }
        }
        return ans;
    }
};