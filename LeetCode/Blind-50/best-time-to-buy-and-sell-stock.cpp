//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int max1=0,n=p.size(),min=99999;
        min=p[0];
        for(int i=1;i<n;i++){
            if(p[i]>min){
                max1=max(max1,p[i]-min);
            }else if(p[i]<min){
                min=p[i];
            }
        }
        return max1;
    }
};