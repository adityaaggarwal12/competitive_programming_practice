//https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& n) {
        if(n.size()==1){
            return 0;
        }
        if(n[0]>n[1]){
            return 0;
        }else if(n[n.size()-1]>n[n.size()-2]){
            return n.size()-1;
        }
        for(int i=1;i<n.size()-1;i++){
            if(n[i]>n[i-1] && n[i]>n[i+1]){
                return i;
            }
        }
        return 0;
    }
};