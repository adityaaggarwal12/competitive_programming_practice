class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>> ans;
        vector<string> v;
        int valid=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=="Z"){
                continue;
            }
            v.clear();
            valid=1;
            unordered_map<char,int> u1;
            int n=s[i].size();
            v.push_back(s[i]);
            for(int j=0;j<n;j++){
                u1[s[i][j]]++;
            }
            for(int j=i+1;i<s.size();j++){
                int m=s[j].size();
                if(n!=m){
                    continue;
                }
                for(int k=0;k<m;k++){
                    if(u1[s[j][k]]==0){
                        valid=0;
                        break;
                    }
                    u1[s[j][k]]--;
                }
                if(valid==1){
                    v.push_back(s[j]);
                    s[j]="Z";
                    
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};