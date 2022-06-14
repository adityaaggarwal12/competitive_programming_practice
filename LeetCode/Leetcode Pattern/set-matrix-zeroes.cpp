//https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        set<int> v,h;
        set<int> :: iterator it;
        int counter=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    h.insert(j);
                    v.insert(i);
                }
            }
        }
        for(int i=0;i<m.size();i++){
            it=v.find(i);
            if(it!=v.end()){
                counter=1;
            }
            for(int j=0;j<m[0].size();j++){
                if(counter){
                    m[i][j]=0;
                }else{
                    it=h.find(j);
                    if(it!=h.end()){
                        m[i][j]=0;
                    }
                }
            }
            counter=0;
        }
    }
};