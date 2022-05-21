//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& n) {
        // vector<int>::iterator it;
        vector<int> v;
        unordered_map<int,int> u;
        for(int i=0;i<n.size();i++){
            // it = find(n.begin(),n.end(),i);
            // if(it==n.end()){
            //     v.push_back(i);
            // }
            u[n[i]]++;
        }
        for(int i=1;i<=n.size();i++){
            if(u[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};