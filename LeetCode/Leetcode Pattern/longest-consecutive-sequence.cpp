//https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        // multiset<int> m1;
        // multiset<int> ::iterator itr;
        int ans=0,last,ans1=1;
        // for(int i=0;i<n.size();i++){
        //     m1.insert(n[i]);
        // }
        sort(n.begin(),n.end());
        // itr=m1.begin();
        // last= *itr;
        // itr++;
        // for(;itr!=m1.end();itr++){
        //     if(*itr-1==last){
        //         ans1++;
        //         last=*itr;
        //     }else{
        //         last=*itr;
        //         ans=0;
        //     }
        //     ans=max(ans,ans1);
        // }
        if(n.size()>0){
            last=n[0];
            ans=1;
        }
        for(int i=1;i<n.size();i++){
            if(n[i]-1==last){
                ans1++;
                last=n[i];
            }else if(n[i]==last){
                continue;
            }else{
                last=n[i];
                ans1=1;
            }
            ans=max(ans,ans1);
        }
        return ans;
        
    }
};