//https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& n) {
        vector<int> ans(n);
        int nn=n.size();
        int r=0,l=nn-1,idx=nn-1;
        while(idx>=0){
            if((n[r]*n[r])>(n[l]*n[l])){
                ans[idx]=(n[r]*n[r]);
                r++;
                idx--;
            }else{
                ans[idx]=(n[l]*n[l]);
                l--;
                idx--;
            }
        }
        return ans;
        
    }
};