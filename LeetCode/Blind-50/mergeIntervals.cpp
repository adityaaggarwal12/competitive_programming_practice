//https://leetcode.com/problems/merge-intervals/

bool srt(const vector<int>& v1, const vector<int>& v2)
    {
	return v1[0] < v2[0];
    }

class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(), v.end(),srt);
        vector<vector<int>> ans;
        int lo,hi;
        lo=v[0][0];
        hi=v[0][1];
        for(int i=1;i<v.size();i++){
            if(v[i][0]>hi){
                ans.push_back({lo,hi});
                lo=v[i][0];
                hi=v[i][1];
            }else{
                if(v[i][1]>hi){
                    hi=v[i][1];
                }
            }
            
        }
        ans.push_back({lo,hi});
        return ans;
    }
};

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& in) {
//         vector<vector<int>> v;
//         int start=0,end=0,count=0;
//         for(int i=0;i<in.size();i++){
//             if(in[i][0]==-1 || in[i][1]==-1){
//                 continue;
//             }
//             start=in[i][0];
//             end=in[i][1];
//             do{
//                 count=0;
//                 for(int j=i;j<in.size();j++){
//                     if(in[j][0]==-1 || in[j][1]==-1){
//                     continue;
//                     }
//                     if(in[j][0]>=start && in[j][0]<=end){
//                         if(in[j][1]>end){
//                             end=in[j][1];
//                         }
//                         count=1;
//                         in[j][0]=-1;
//                         in[j][1]=-1;
//                     }else if(in[j][1]<=end && in[j][1]>=start){
//                         if(in[j][0]<start){
//                             start=in[j][0];
//                         }
//                         count=1;
//                         in[j][1]=-1;
//                         in[j][0]=-1;
//                     }else if(in[j][0]<=start && in[j][1]>=end){
//                         start=in[j][0];
//                         end=in[j][1];
//                         count=1;
//                         in[j][1]=-1;
//                         in[j][0]=-1;
//                     }
//                 }
//             }while(count!=0);
//             v.push_back({start,end});
//         }
//         return v;
//     }
// };